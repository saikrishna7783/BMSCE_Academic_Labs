%{
    #include<stdio.h>
%}
%option noyywrap


%%
[0-9]*222[0-9]*    {printf("\n%s: Accepted",yytext);}
[0-9]*  {printf("\n%s: Rejected", yytext);}
\n return 0;


%%
int main()
{
    printf("Enter input: ");
    yylex();
    return 0;
}
