#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.1416
void main()
{
int deg,i;
float x,nr,dr,term,s=0;
printf("Enter the angle : ");
scanf("%d",&deg);
x=deg*(pi/180);
nr=x;
dr=1;
i=2;
do
{
term=nr/dr;
nr=-(nr*x*x);
dr=(dr*i*(i+1));
s+=term;
i+=2;
}
while(fabs(term)>0.0000001);
printf("Sin%d=%f, without using built in function\nSin%d=%f, using built in function",deg,s,deg,sin(x));
getch();
}