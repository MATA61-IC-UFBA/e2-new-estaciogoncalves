/* recognize tokens for the calculator */

%option noyywrap nodefault yylineno
%{
#include "token.h"

%}

%%
"+" { return PLUS; }
"-" { return MINUS; }
"*" { return TIMES; }
"/" { return DIV; }
[ \t] {/* ignore whitespace */ }
[0-9]+ { yylval = atoi(yytext); return NUMBER;}
\n { return EOL; }
.       { return ERROR; }
%%
#include "main.c"
