#include<stdio.h>
#include<conio.h>

int fact(int n)
{
int r;
if(n==0)
return 1;
r=n*fact(n-1);
return r;
}

void main()
{
int n;
clrscr();
printf("Enter the number : ");
scanf("%d",&n);
if(n>=0)
printf("The factorial is %d",fact(n));
else
printf("Error!");
getch();
}