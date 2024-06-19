%{
#include "y.tab.h"
#include <stdlib.h>
%}

%%

[0-9]+ {
    yylval = atoi(yytext);
    return NUMBER;
}

[+\-] {
    return yytext[0];
}

[ \t\n] {
    /* ignore whitespace */
}

. {
    printf("Unknown character: %s\n", yytext);
}

%%

int yywrap(void) {
    return 1;
}
