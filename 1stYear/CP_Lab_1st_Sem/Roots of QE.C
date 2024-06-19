#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,d,D,B;
clrscr();
printf("Enter the co-efficients of the quadratic expression : ");
scanf("%f%f%f",&a,&b,&c);
if(a==0)
printf("Invalid inputs!");
else
{
d=(b*b)-(4*a*c);
D=((sqrt(fabs(d)))/(2*a));
B=-b/(2*a);
if(d>0)
printf("The roots are real and distinct\nThe roots are %0.2f and %0.2f",B-D,B+D);
else if(d==0)
printf("The roots are real and equal\nThe root is %0.2f",B);
else
printf("The roots are imaginary and distinct\nThe roots are %0.2f-i%0.2f and %0.2f+i%0.2f",B,D,B,D);
}
getch();
}