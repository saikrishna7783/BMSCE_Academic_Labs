#include <stdio.h>
int b2d(int n)
{
    int sum;
    if(n==0)
    return 0;
    else
    sum=(2*b2d(n/10))+n%10;
    return sum;
}
int main()
{
    int n;
    printf("Enter a binary number : ");
    scanf("%d",&n);
    printf("The decimal equivalent would be : %d",b2d(n));
    return 0;
}