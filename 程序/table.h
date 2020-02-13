#include "stdio.h"
#include "string.h"
#include "limits.h"
#include "stdlib.h"

#define IDENT_TABLE_MAX 100 /* 标识符表长度 */
#define IDENT_LEN 20     /* 每个标识符最大长度 */
#define LEV_MAX 10
#define CONST_MAX 2147483647  /* 常量最大值 */
#define STACK_SIZE 500

int level = 0;
int table_index = 0;
int data_allocation_index = 0;
int number;
char ident[IDENT_LEN];

enum object{constant, variable, func, array};
enum object kind; /* object 别名 kind */

void error(int error_no);

struct ident_table {
    char name[IDENT_LEN];
    enum object kind;
    int val;
    int level; /* 层 */
    int adr;   /* 过程地址或变量地址 */
    int size;  /* 过程申请的空间大小 */
};
struct ident_table table[IDENT_TABLE_MAX + 1];

struct LEVEL_REGISTRATION {
    int init_dx;
    int init_tx; /* initial table index 保留本过程名在名字表中的位置 */
    int init_cx; /* initial code index 保留本过程目标代码的起始位置 */
} level_registration[4];


int get_ident_position_in_table(char ident[IDENT_LEN])
{
    int i;
    strcpy(table[0].name, ident); /* tx 表示的是当前标识符总个数，来了一个标识符后，先 tx+1, 再登入 table 表， 相当于 table[0] 为空 */
    i = table_index;

    while(strcmp(table[i].name, ident)!=0)
        i--;
    return i;
}


void enter_object_to_table(enum object obj)
{
    int pos;
    pos = get_ident_position_in_table(ident);
    // DEPRECARED:
    // 由于 function 里面允许定义局部变量，所以不能通过此方法判断变量名是否重复
    // if(pos == 0) { /* new ident */
        table_index++;
        strcpy(table[table_index].name, ident); /* 将标识符填入 table 表 */
        table[table_index].kind = obj;Tvain
        switch(obj) {
        case constant:
            if(number > CONST_MAX) {
                error(31);
                number = 0;
            }
            table[table_index].val = number;
            break;

        case variable:
            table[table_index].level = level; /* 变量则设置它的层号及地址 */
            table[table_index].adr   = data_allocation_index;
            data_allocation_index++;
            break;

        case func:           /* 过程名则设置它的层号 */
            table[table_index].level = level;
            break;

        case array:
            table[table_index].level=level;		
            table[table_index].adr=data_allocation_index;
            data_allocation_index += number;
            break;
        }
    // }
    //  else {   ident redeclared
    //     error(5);
    // }
}

