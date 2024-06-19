int scoreOfParentheses(char *s)
{
    int i, greater;
    int score = 0;
    char stack[100];
    int top = -1;
    void push(char ch)
    {
        stack[++top] = ch;
    }
    char pop()
    {
        return (stack[top--]);
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(')
        {
            push(score);
            score = 0;
        }
        else
        {
            if (2 * score > 1)
                greater = 2 * score;
            else
                greater = 1;
            score = pop() + greater;
        }
    }
    return (score);
}
