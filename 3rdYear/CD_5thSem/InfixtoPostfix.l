%{
    #include "y.tab.h"
    extern int yylval;
%}


%option noyywrap
%%
[0-9]+ { yylval=atoi(yytext); return digit;}
[\t] ;
[\n] return 0;
. return yytext[0];


%%
