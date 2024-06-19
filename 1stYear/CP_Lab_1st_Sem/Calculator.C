#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char op;
clrscr();
printf("Enter the arithmetic expression : ");
scanf("%d%c%d",&a,&op,&b);
switch(op)
{
case '+':printf("Sum=%d",a+b);
break;
case '-':printf("Difference=%d",a-b);
break;
case '*':printf("Product=%d",a*b);
break;
case '%':printf("Remainder=%d",a%b);
break;
case '/':if(b==0)
{
printf("Division error!");
break;
}
printf("Quotient=%0.2f",(float)a/b);
break;
default:printf("Enter valid operator!");
break;
}
getch();
}