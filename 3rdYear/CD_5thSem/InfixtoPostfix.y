%{
    #include <ctype.h>
    #include<stdio.h>
    #include<stdlib.h>
    int yylex();
    int yyerror();
%}
%token digit


%%
S: E {printf("\n\n");}
;
E: E '+' T { printf ("+");}
| E '-' T { printf ("-");}
| T
;
T: T '*' F { printf("*");}
| T '/' F { printf("/");}
| F
;
F: F '^' P { printf("^");}
| P
;
P: '(' E ')'
| digit {printf("%d", $1);}
;


%%
int main()
{
    printf("Enter infix expression: ");
    yyparse();
}

int yyerror()
{
    printf("Error");
    return 0;
}
