#include <stdio.h>
#include <string.h>

int top = -1;
char s[20];
char infix[20];
char postfix[20];

void push(char item)
{
    s[++top] = item;
}

char pop()
{
    return s[top--];
}

int sp(char item)
{
    switch (item)
    {
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 4;
    case '^':
    case '$':
        return 5;
    case '(':
        return 0;
    case '#':
        return -1;
    default:
        return 8;
    }
}

int ip(char item)
{
    switch (item)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 3;
    case '^':
    case '$':
        return 6;
    case '(':
        return 9;
    case ')':
        return 0;
    default:
        return 7;
    }
}

void inf_to_post()
{
    int i, j = 0;
    char symbol;
    push('#');
    for (i = 0; i < strlen(infix); i++)
    {
        symbol = infix[i];
        if (symbol == '(')
        {
            push(symbol);
        }
        else if (symbol == ')')
        {
            while (s[top] != '(')
            {
                postfix[j] = pop();
                j++;
            }
            pop();
        }
        else if (sp(s[top]) >= ip(symbol))
        {
            while (sp(s[top]) >= ip(symbol))
            {
                postfix[j] = pop();
                j++;
            }
            push(symbol);
        }
        else
        {
            push(symbol);
        }
    }
    while (s[top] != '#')
    {
        postfix[j] = pop();
        j++;
    }
    postfix[j] = '\0';
}

int main()
{
    printf("enter a valid infix expression\n");
    scanf("%s", infix);
    inf_to_post();
    printf("The postfix expression is %s", postfix);
    return 0;
}
