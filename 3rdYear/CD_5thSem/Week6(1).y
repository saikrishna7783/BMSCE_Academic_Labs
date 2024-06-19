%{
#include <stdio.h>
%}

%token NUMBER
%left '+'
%right '-'

%%

expr: expr '+' term
    | term
    ;

term: term '-' factor
    | factor
    ;

factor: NUMBER
    ;

%%

int main(void) {
    yyparse();
    return 0;
}

int yyerror(char *s) {
    fprintf(stderr, "error: %s\n", s);
    return 0;
}
