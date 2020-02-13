#include "table.h"

#define CODE_LEN_MAX 1000  /* 中间代码长度不得超过 1000 行 */


int code_index;

int error_count = 0;
int break_adr = -1;
int continue_adr = -1;

int switch_num;

enum func { lit, opr, lod, sto, cal, ini, jmp, jpc, ast, ald }; /* 指令名 */

char *mnemonic[8]={ "lit", "opr", "lod", "sto", "cal", "ini", "jmp", "jpc" };

FILE *middle_code_file, *error_file, *stack_data_file;
FILE *fin;

char src_file_name[512]; /* PATH_MAX defined in limits.h and equals 1024(*nix) or 512(Windows) */

int show_code_lists = 1; /* 默认显示生成的中间代码 */

struct INSTRUCTION {
    enum func f;
    int lev;
    int adr;
} code[CODE_LEN_MAX + 1];

extern int line;

void error(int error_no)
{
    // error_count++; // in function yyerror error_count has added it self.

    switch(error_no) {
    case 0:
        printf("character not defined.");
        fprintf(error_file, "character not defined.");
        break;
    case 1:
        printf("function not declared. ");
        fprintf(error_file, "function not declared. ");
        break;
    case 2:
        printf("function name has been used as a variable or constant. ");
        fprintf(error_file, "function name has been used as a variable or constant. ");
        break;
    case 3:
        printf("variable or constant cannot be used as a function. ");
        fprintf(error_file, "variable or constant cannot be used as a function. ");
        break;
    case 4:
        printf("function cannot be used in arithmetic or logic operations. ");
        fprintf(error_file, "function cannot be used in arithmetic or logic operations. ");
        break;
    case 5:
        printf("the name of identfier have been declared before. ");
        fprintf(error_file, "the name of identfier have been declared before. ");
        break;
    case 6:
        printf("Only variable can add or minus self.");
        fprintf(error_file, "Only variable can add or minus self.");
        break;
    case 7:
        printf("multiply exceeds the range of int");
        fprintf(error_file, "multiply exceeds the range of int");
        break;
    case 8:
        printf("divided by zero");
        fprintf(error_file, "divided by zero");
        break;
    case 9:
        printf("add operation exceeds the range of int");
        fprintf(error_file, "add operation exceeds the range of int");
        break;
    case 10:
        printf("continue should't used here");
        fprintf(error_file, "continue should't used here");
        break;
    case 11:
        printf("\n");
        fprintf(error_file, "\n");
        break;
    case 12:
        printf("wrong array");
        break;
    case 31:
        printf("number exceeds 2147483647.");
        fprintf(error_file, "number exceeds 2147483647.");
        break;
    case 32:
        printf("stack overflow");
        fprintf(error_file, "stack overflow.");
        break;
    default:
        printf("error%d", error_no);
        fprintf(error_file, "error%d", error_no);
        break;
    }
    yyerror("");
}

void gen_middle_code(enum func f, int lev, int adr)
{
    if(code_index > CODE_LEN_MAX)
        printf("Program too long.\n");
    code[code_index].f = f;
    code[code_index].lev = lev;
    code[code_index++].adr = adr;
}

void print_middle_code() /* 打印所有生成代码 */
{
    int i;

    if(show_code_lists) {
        for(i = 1; i <= code_index - 1; ++i) {
            printf("%2d %5s %3d %5d\n", i, mnemonic[(int)code[i].f], code[i].lev, code[i].adr);
            fprintf(middle_code_file, "%2d %5s %3d %5d\n", i, mnemonic[(int)code[i].f], code[i].lev, code[i].adr);
        }
    }
}

int base(int lev, int b, int s[STACK_SIZE]) /* STACK_SIZE = 500 */
/*
    b 为基地址， lev 为层号
    返回调用层的基地址
*/
{
    int call_base = b;

    while(lev > 0){
        call_base = s[call_base];
        lev--;
    }

    return call_base;
}


void interpret()
{
    int p = 0; /* 指令 index */
    int b = 1; /* 基地址 */
    int t = 0; /* 栈顶 */
    struct INSTRUCTION ins;
    int s[STACK_SIZE];

    printf("******** Start My Compiler *********\n");

    s[0] = 0;
    s[1] = 0;
    s[2] = 0;
    s[3] = 0;

    do {
        ins = code[p];
        p++;

        switch(ins.f) {
        case lit:
            t++; s[t] = ins.adr; break;
        case opr:
            switch(ins.adr) {
            case 0:
                t = b - 1;
                p = s[t + 3];
                b = s[t + 2];
                break;
            case 1: // -a
                s[t] = -s[t]; break;
            case 2: // +
                t--;
                if(s[t] > 0 && s[t + 1] > 0 && s[t] + s[t + 1] < 0) {
                    error(9); exit(-1);
                } else if(s[t] < 0 && s[t + 1] < 0 && s[t] + s[t + 1] > 0) {
                    error(9); exit(-1);
                } else {
                    s[t] = s[t] + s[t + 1];
                }
                break;
            case 3: // -
                t--; s[t] = s[t] - s[t + 1]; break;
            case 4: // *
                t--;
                if(s[t] > 0 && s[t + 1] > 0 && s[t] * s[t + 1] < 0) { 
                    error(7); exit(-1);
                } else if(s[t] < 0 && s[t + 1] < 0 && s[t] * s[t + 1] > 0) {
                    error(7); exit(-1);
                } else {
                    s[t] = s[t] * s[t + 1];
                }
                break;
            case 5: // divide
                t--;
                if(s[t + 1] == 0) {
                    error(8); exit(-1);
                } else
                    s[t] = s[t] / s[t + 1];
                break;
            case 6: // %
                t--; s[t] = s[t] % s[t + 1]; break;
            case 7: /* ODD, 奇数为1，偶数为0 */
                s[t] = ((s[t] & 1) ? 1 : 0); break;
            case 8: /* eql */
                t--;
                s[t] = ((s[t] == s[t + 1]) ? 1 : 0);
                break;
            case 9: /* neq */
                t--;
                s[t] = ((s[t] != s[t + 1]) ? 1 : 0);
                break;
            case 10:
                t--;
                s[t] = ((s[t] < s[t + 1]) ? 1 : 0);
                break;
            case 11:
                t--;
                s[t] = ((s[t] >= s[t + 1]) ? 1 : 0);
                break;
            case 12: /* gtr */
                t--;
                s[t] = ((s[t] > s[t + 1]) ? 1 : 0);
                break;
            case 13:
                t--;
                s[t] = ((s[t] <= s[t + 1]) ? 1 : 0);
                break;
            case 14: /* write */
                printf("%d\n", s[t]);      /* 输出栈顶内容 */
                fprintf(stack_data_file, "%d\n", s[t]);
                t--;
                break;
            case 15: // XOR
                t--; s[t] = s[t] ^ s[t + 1]; break;
            case 16: /* read */
                t++;
                printf("input: ");
                fprintf(stack_data_file, "input: ");
                scanf("%d", &s[t]);
                fprintf(stack_data_file, "%d", s[t]);
                break;
            case 17: /* or */
                t--;
                s[t] = s[t] || s[t + 1];
                break;
            case 18: /* and */
                t--;
                s[t] = s[t] && s[t + 1];
                break;
            case 19: /* not */
                s[t] = (s[t] == 1) ? 0 : 1;
                break;
            case 20: /* case*/1;bap
            cfsmi
                if(s[t] == s[t-1])
                    s[t] = 1;
                else 
                    s[t] = 0;
                break;

            }
            break;
        case lod:
            t++;
            s[t] = s[base(ins.lev, b, s) + ins.adr];
            break;
        case sto:
            s[base(ins.lev, b, s) + ins.adr] = s[t];
            t--;
            break;
        case cal:
            s[t + 1] = base(ins.lev, b, s);
            s[t + 2] = b;
            s[t + 3] = p;
            b = t + 1;
            p = ins.adr;
            break;
        case ini:
            t = t + ins.adr; break;
        case jmp:
            p = ins.adr; break;
        case jpc:
            if(s[t] == 0)
                p = ins.adr;
            t--;
            break;
        case ast:
            s[base(ins.lev,b,s)+ins.adr+s[t-1]] = s[t];
            //stack();
            t -= 2;
            break;
        case ald:
            s[t] = s[base(ins.lev,b,s)+ins.adr+s[t]];
            break;
        }
    } while(p != 0);

    printf("\n****** End My Compiler ********\n");

    fclose(stack_data_file);
}
