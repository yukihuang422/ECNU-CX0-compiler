%{
    #include "gencode.h"
    #define YYDEBUG 0
    #ifdef YYDEBUG
        #define TRACE printf("reduce at line %d\n", __LINE__);
    #else
        #define TRACE
    #endif

%}



%union {
    char *ident;
    int number;
}

/* reserved words */
// %token SYM_main
%token SYM_call SYM_const
// %token SYM_do
%token SYM_function SYM_read SYM_odd
%token SYM_int SYM_bool SYM_array SYM_while
%token SYM_write 
%token SYM_if
%token SYM_else
%token SYM_for
%token SYM_true
%token SYM_false
%token SYM_break
%token SYM_continue
%token SYM_exit
%token SYM_do
%token SYM_repeat SYM_until
%token SYM_case SYM_switch SYM_default

/* operators */
%token SYM_becomes                          /* level 14 */
%token SYM_or                               /* level 12 */
%token SYM_and                              /* level 11 */
%token SYM_xor                              /* level 9 */
%token SYM_eql SYM_neq                      /* level 7 */
%token SYM_lss SYM_leq SYM_gtr SYM_geq      /* level 6 */
%token SYM_plus SYM_minus                   /* level 4 */
%token SYM_times SYM_slash SYM_mod          /* level 3 */
%token SYM_not SYM_addself SYM_minusself    /* level 2 */
%token SYM_lparen SYM_rparen SYM_lbrace SYM_rbrace  SYM_lsquar SYM_rsquar/* level 1 */
%token SYM_semicolon SYM_colon


%token <ident> SYM_ident
%token <number> SYM_number 

/* 结合性 */
%right SYM_becomes
%right SYM_not
%right SYM_addself
%right SYM_minusself

%type <ident> some_ident
%type <ident> another_ident

%%

// rules secleciton

program:
    {
        level--;  // 在 block 里会恢复为 0
        break_adr = -1;
    }
    block
    ;

block:
    SYM_lbrace
    {
        level++;
        data_allocation_index = 3;
        level_registration[level].init_tx = table_index;
        table[table_index].adr = code_index;
        gen_middle_code(jmp, 0, 1); // 为什么这里是 1
        if(level > LEV_MAX)
            error(32);
    }
    declaration_list
    {
        code[table[level_registration[level].init_tx].adr].adr = code_index; // 填写过程体在 code 中的入口地址
        table[level_registration[level].init_tx].adr = code_index;  // 填写过程体在 table 中的入口地址
        table[level_registration[level].init_tx].size = data_allocation_index;
        level_registration[level].init_cx = code_index;
        gen_middle_code(ini, 0, data_allocation_index);
    }
    statement_list
    {
        gen_middle_code(opr, 0, 0);
        printf("\n");
    }
    SYM_rbrace
    ;

declaration_list:
    | declaration_list declaration
    ;

declaration:
    SYM_int some_ident
    {
        strcpy(ident, $2);
        enter_object_to_table(variable);
    }  SYM_semicolon


    | SYM_bool another_ident
    {
        strcpy(ident, $2);
        enter_object_to_table(variable); // 暂时将 bool 型变量当作 variable 处理
    } SYM_semicolon


    | SYM_const SYM_int some_ident
    { strcpy(ident, $3); }
    SYM_becomes SYM_number
    {
        number = $6;
        enter_object_to_table(constant);
    } SYM_semicolon


    | SYM_function some_ident
    {
        strcpy(ident, $2);
        enter_object_to_table(func);
        level_registration[level].init_dx = data_allocation_index;
    }
    block
    {
        level--; 
        data_allocation_index = level_registration[level].init_dx;
    }

    | SYM_array some_ident{
		strcpy(ident, $2);
	}SYM_lsquar SYM_number SYM_rsquar{
		number = $5;
		enter_object_to_table(array);
	} SYM_semicolon
    ;

some_ident:
    SYM_ident
    ;

another_ident:
    SYM_ident
    ;

statement_list:
    | statement_list statement
    ;

statement:
    assignment_statement SYM_semicolon


    | SYM_if SYM_lparen another_expression SYM_rparen
    {
        $<number>$ = code_index;
        gen_middle_code(jpc, 0, 0); // 回填用 L1
    }
    statement
    {
        $<number>$ = code_index;
        gen_middle_code(jmp, 0, 0); // 回填用 L2， 如果条件成立，执行完 statement 后应该无条件跳转至 if..else.. 之后的地址， 该地址待回填
        code[$<number>5].adr = code_index; // L1
    }
    else_statement
    {
        code[$<number>7].adr = code_index; // L2
    }  SYM_semicolon // Warning: REMOVE semicolon after check.


    | SYM_while
    {
        $<number>$ = code_index;
        continue_adr = code_index; // continue 跳转回此处即可
    }
    SYM_lparen another_expression SYM_rparen
    {
        $<number>$ = code_index;
        gen_middle_code(jpc, 0, 0); // 用 statement 之后的地址回填
    }
    statement
    {
        gen_middle_code(jmp, 0, $<number>2); // 无条件跳转回 while 循环
        code[$<number>6].adr = code_index;

        if(break_adr != -1) { // 说明之前遇到了 break
            code[break_adr].adr = code_index; // 更改 break 对应的 jmp 指令的 adr, 相当于跳出 while 循环
            break_adr = -1; // 重新初始化为不可用状态
        }
        continue_adr = -1; // 重新初始化为不可用状态
    }  SYM_semicolon // Warning: REMOVE semicolon after check.

    | SYM_read some_ident
	{
		int pos;
		strcpy(ident,$2);
		pos = get_ident_position_in_table(ident);
		if(pos==0){
			error(0);
		}
		else{
			if(table[pos].kind!=array){
				error(12);
				pos=0;
			}
		}
		$<number>$=pos;
	} SYM_lsquar SYM_number SYM_rsquar
	{
		int i;
		if($<number>3!=0){
			i = $<number>3;
			gen_middle_code(opr,0,16); //read
			gen_middle_code(ast,level-table[i].level,table[i].adr);
		}
	}SYM_semicolon;

    | SYM_switch SYM_lparen SYM_ident
    {
        int pos;
		strcpy(ident,$3);
		pos = get_ident_position_in_table(ident);
		if(pos==0){
			error(0);
		}
		switch_num = table[pos].adr;
    }
    SYM_rparen SYM_lbrace case_stat_list SYM_rbrace

    | break_state SYM_semicolon

    | continue_state SYM_semicolon

    | exit_state SYM_semicolon

    | do_while_state SYM_semicolon

    | repeat_until_state SYM_semicolon

    | SYM_for SYM_lparen init_expresstion  SYM_semicolon
    {
        $<number>$ = code_index; // L1, $<number>5
    }
    another_expression SYM_semicolon
    {
        $<number>$ = code_index;   // $<number>8
        gen_middle_code(jpc, 0, 0); // 用 statement 之后的地址回填
        gen_middle_code(jmp, 0, 0); // 条件成立先执行 statement(L4), 再执行 i++
        continue_adr = code_index; // continue 执行到跳转到这里, 是 additive 之前不是之后！！
    }
    additive_expresstion
    {
        gen_middle_code(jmp, 0, $<number>5); // jmp 0 L1
        code[$<number>8 + 1].adr = code_index; // jmp 0 L4 回填
    } SYM_rparen
    statement
    {
        gen_middle_code(jmp, 0, $<number>8 + 2); // jmp 0 L2 , 先跳转回去执行 i++， 也就是 L2
        code[$<number>8].adr = code_index; // jpc 0 L3 回填

        if(break_adr != -1) { // 处理类似于 while
            code[break_adr].adr = code_index;
            break_adr = -1;
        }
        continue_adr = -1;
    }  SYM_semicolon // Warning: REMOVE semicolon after check.


    | SYM_write some_expression SYM_semicolon
    {
        gen_middle_code(opr, 0, 14); // NOTE: 此处的 write 是为了输出变量，实际上也就是输出栈顶内容
    }


    | SYM_read some_ident SYM_semicolon
    {
        int pos;
        strcpy(ident, $2);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(opr, 0, 16);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    }


    | additive_statement SYM_semicolon // i++, ++i, --i, i--


    | SYM_call some_ident SYM_semicolon
    {
        int pos;
        strcpy(ident, $2);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(1);
        else if(table[pos].kind != func)
            error(3);
        else
            gen_middle_code(cal, level - table[pos].level, table[pos].adr);
    }


    //| block
    | SYM_lbrace statement_list SYM_rbrace
    ;

else_statement: // 提取公因子
    | SYM_else statement
    ;

expression:
    some_expression
    | another_expression
    ;

some_expression:
    SYM_minus some_term // 负号
        { gen_middle_code(opr, 0, 1); }
    | some_term SYM_plus some_term
        { gen_middle_code(opr, 0, 2); }
    | some_term SYM_minus some_term
        { gen_middle_code(opr, 0, 3); }
    | some_term
    ;

some_term:
    some_factor SYM_times some_factor
        { gen_middle_code(opr, 0, 4); }
    | some_factor SYM_slash some_factor
        { gen_middle_code(opr, 0, 5); }
    | some_factor SYM_mod some_factor
        { gen_middle_code(opr, 0, 6); }
    | some_factor SYM_xor some_factor
        { gen_middle_code(opr, 0, 15); }
    | some_factor
    ;

some_factor:
    left_condition

    | SYM_lparen some_expression SYM_rparen
    ;

another_expression:
    another_expression SYM_or another_term
        { gen_middle_code(opr, 0, 17); }
    | another_term
    ;

another_term:
    another_term SYM_and another_factor
        { gen_middle_code(opr, 0, 18);  }
    | another_factor
    ;

another_factor:
    SYM_true
        { gen_middle_code(lit, 0, 1); }
    | SYM_false
        { gen_middle_code(lit, 0, 0); }
    | SYM_not another_factor
        { gen_middle_code(opr, 0, 19); }
    | SYM_lparen another_expression SYM_rparen

    | condition
    ;


condition:
    left_condition right_condition

    | SYM_odd some_expression
        { gen_middle_code(opr, 0, 7); }
    ;

right_condition:
    // FIXED: 空代表可以写成 if(a) 的形式，这时候需要判断 a > 0 是否成立
    {
        gen_middle_code(lit, 0, 0);
        gen_middle_code(opr, 0, 12);
    }
    | SYM_lss some_expression
        { gen_middle_code(opr, 0, 10); }
    | SYM_leq some_expression
        { gen_middle_code(opr, 0, 13); }
    | SYM_gtr some_expression
        { gen_middle_code(opr, 0, 12); }
    | SYM_geq some_expression
        { gen_middle_code(opr, 0, 11); }
    | SYM_eql some_expression
        { gen_middle_code(opr, 0, 8); }
    | SYM_neq some_expression
        { gen_middle_code(opr, 0, 9); }

    // | some_expression SYM_lss left_condition // TODO
    // | some_expression SYM_leq left_condition
    // | some_expression SYM_gtr left_condition
    // | some_expression SYM_geq left_condition
    // | some_expression SYM_eql left_condition
    // | some_expression SYM_neq left_condition
    ;


left_condition:
    some_ident
    {
        int pos;
        strcpy(ident, $1);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            switch(table[pos].kind) {
                case constant:
                    gen_middle_code(lit, 0, table[pos].val); break;
                case variable:
                    gen_middle_code(lod, level - table[pos].level, table[pos].adr); break;
                case func:
                    error(4); break;
                case array:
                    error(4); break;
            }
        }
    }

    | SYM_number
    {
        int num = $1;
        if(num > CONST_MAX) {
            error(31);
            num = 0;
        }
        gen_middle_code(lit, 0, num);
    }
    | SYM_ident SYM_lsquar some_expression SYM_lsquar
	{
		int pos;
		strcpy(ident,$1);
		pos=get_ident_position_in_table(ident);
		if(pos==0){
			error(0);
		}
		else{
			if(table[pos].kind != array){
				error(12);
				pos=0;
			}
			else{
				gen_middle_code(ald,level - table[pos].level,table[pos].adr);
			}
		}		
	}
    ;



assignment_statement:
    some_ident
    {
        int pos;
        strcpy(ident, $1);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            if(table[pos].kind != variable){
                error(12);
                pos = 0;
            }
        }
        $<number>$ = pos;
    }
    SYM_becomes expression
    {
        int pos;
        if($<number>2 != 0) { // 其实就是 SYM_ident 后面那个大括号保留下来的 i， 因为此处无法访问上一个段落的 i, 所以要在上一段中用 $<number>$2 保存下来， $<number>$ 是指定 i 的类型为 数字
            pos = $<number>2;
            gen_middle_code(sto, level-table[pos].level, table[pos].adr);
        }
    }
    ;

init_expresstion:
    | assignment_statement
    ;

additive_statement:
    some_ident SYM_addself
    {
        int pos;
        strcpy(ident, $1);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else if(table[pos].kind != variable) {
            error(6);
        }
        else {
            gen_middle_code(lit, 0, 1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    }
    | SYM_addself some_ident
    {
        int pos;
        strcpy(ident, $2);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(lit, 0, 1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    }
    | some_ident SYM_minusself
    {
        int pos;
        strcpy(ident, $1);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(lit, 0, -1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    }
    | SYM_minusself some_ident
    {
        int pos;
        strcpy(ident, $2);
        pos = get_ident_position_in_table(ident);
        if(pos == 0)
            error(0);
        else {
            gen_middle_code(lit, 0, -1);
            gen_middle_code(lod, level - table[pos].level, table[pos].adr);
            gen_middle_code(opr, 0, 2);
            gen_middle_code(sto, level - table[pos].level, table[pos].adr);
        }
    }
    ;

additive_expresstion:
    | additive_statement
    | assignment_statement
    ;

break_state:
    SYM_break
    {
        break_adr = code_index;
        gen_middle_code(jmp, 0, 0);
    }
    ;

continue_state:
    SYM_continue
    {
        if(continue_adr != -1)
            gen_middle_code(jmp, 0, continue_adr);
        else {
            // 出现了 continue 的时候值却仍然为 -1, 这是不可能的，
            // 因为 continues 直到 while 或 for 结束才会初始化为 -1
            error(10);
        }
    }
    ;

exit_state:
    SYM_exit
    {
        gen_middle_code(jmp, 0, 0);
    }
    ;

do_while_state:
    SYM_do 
    {
        $<number>$ = code_index;
    }
    statement
    SYM_while SYM_lparen another_expression SYM_rparen
    {
        gen_middle_code(jpc,0,0);
        gen_middle_code(jmp, 0, $<number>2);
        code[code_index - 2].adr = code_index;
    }
    ;

repeat_until_state:
    SYM_repeat
    {
        $<number>$ = code_index;
    }
    statement
    SYM_until SYM_lparen another_expression SYM_rparen
    {
        gen_middle_code(jpc, 0, $<number>2);
        gen_middle_code(jmp, 0, code_index + 1);
    }
    ;

case_stat_list:
    caseList default
    ;

caseList:
    | caseList case
    ;

case:
    SYM_case SYM_number
    {
        int num;
        num = $2;
        gen_middle_code(lod, 0, switch_num);
        gen_middle_code(lit, 0, num);
        gen_middle_code(opr, 0, 20);
        $<number>$ = code_index;
        gen_middle_code(jpc, 0, 0);
    }SYM_colon statement_list
    {
        code[$<number>3].adr = code_index;
    }
    ;

default:
    SYM_default SYM_colon
    {
        $<number>$ = code_index;
        gen_middle_code(jpc, 0, 0);
    }statement_list
    {
        code[$<number>3].adr = code_index;
    }

%%

/////////////////////////////////////////////////////////////////////////////
// programs section

yyerror(char *s)
{
    error_count++;
    printf("%s in line %d\n", s, line);
    fprintf(error_file, "%s in line %d\n", s, line);
}

int main()
{
    #if YYDEBUG
        yydebug = 1;
    #endif

    if((error_file = fopen("error.txt", "w"))==NULL) {
        printf("Cann't open file!\n");
        exit(0);
    }

    printf("Input file (absolute or relative path): \n");
    fprintf(error_file, "Input file (absolute path): \n");

    scanf("%s", src_file_name);
    fprintf(error_file, "%s\n", src_file_name);

    if((fin = fopen(src_file_name, "r")) == NULL) {
        printf("Cann't open file according to given filename\n");
        exit(0);
    }

    redirectInput(fin);

    error_count = 0;
    code_index = 0;

    if((middle_code_file = fopen("middle_code.txt", "w")) == NULL) {
        printf("Cann't open middle_code.txt file!\n");
        exit(0);
    }

    if((stack_data_file = fopen("stack.txt", "w")) == NULL) {
        printf("Cann't open stack.txt file!\n");
        exit(0);
    }

    yyparse();

    fclose(middle_code_file);
    fclose(error_file);

    if(error_count == 0) {
        print_middle_code();
        interpret();
    }
    else
        printf("%d errors in CX program\n", error_count);

    fclose(fin);
    getchar();
    return 0;
}
