%{
    #include "stdio.h"
    #include "string.h"
    #include "stdlib.h"
    #include "cxYacc.tab.h"
    int line = 1;
    void yyerror(char *);
    int yywrap(void);
%}

%x COMMENT

%%

"/*" { BEGIN COMMENT; }
<COMMENT>. |
<COMMENT>\n ;
<COMMENT>"*/" {BEGIN INITIAL; }

[ \t]         ; /* skip whitespace */
[\n]          { line++; }
"int"         { return SYM_int; }
"bool"        { return SYM_bool; }
"array"       { return SYM_array; }
"if"          { return SYM_if; }
"else"        { return SYM_else; }
"do"          { return SYM_do; }
"while"       { return SYM_while; }
"for"         { return SYM_for; }
"break"       { return SYM_break; }
"continue"    { return SYM_continue; }
"exit"        { return SYM_exit; }
"write"       { return SYM_write; }
"read"        { return SYM_read; }
"odd"         { return SYM_odd; }
"repeat"      { return SYM_repeat; }
"until"       { return SYM_until; }
"switch"      { return SYM_switch; }
"case"        { return SYM_case; }
"default"     { return SYM_default; }

"true"        { return SYM_true; }
"false"       { return SYM_false; }

"const"       { return SYM_const; } /* extended reserved words */

"call"        { return SYM_call; }
"function"    { return SYM_function; } /* "main"        { return SYM_main; } */


[A-Za-z]([A-Za-z]|[0-9])*  {
    yylval.ident = (char *)malloc(strlen(yytext) + 1);
    strcpy(yylval.ident, yytext);
    return SYM_ident;
}
[0-9]+        {
    yylval.number = atoi(yytext);
    return SYM_number;
}

"+"     { return SYM_plus; }
"-"     { return SYM_minus; }
"*"     { return SYM_times; }
"/"     { return SYM_slash; }
"^"     { return SYM_xor; }

"<"     { return SYM_lss; }
"<="    { return SYM_leq; }
">"     { return SYM_gtr; }
">="    { return SYM_geq; }
"=="    { return SYM_eql; }
"!="    { return SYM_neq; }

"="     { return SYM_becomes;}
"||"    { return SYM_or; }
"&&"    { return SYM_and; }
"!"     { return SYM_not; } /* 取反操作 */

";"     { return SYM_semicolon; }
"("     { return SYM_lparen; }
")"     { return SYM_rparen; }
"["     { return SYM_lsquar; }
"]"     { return SYM_rsquar; }
"{"     { return SYM_lbrace; }
"}"     { return SYM_rbrace; }
":"     { return SYM_colon; }

"%"     { return SYM_mod; } /* extended operators */
"++"    { return SYM_addself; }
"--"    { return SYM_minusself; }

.       { yyerror("unknown character"); }

%%

void redirectInput(FILE *input)
{
    yyin = input;
}

int yygetchar(void)
{
    int ret;
    ret = getc(yyin);
    printf("%c", ret);
    return ret;
}

int yywrap(void)
{
    return 1;
}