#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
clrscr();
printf("Enter order of matrix A : ");
scanf("%d%d",&m,&n);
printf("Enter the order of matrix B : ");
scanf("%d%d",&p,&q);
if(n!=p)
printf("Multiplication not possible!");
else
printf("Enter the elements of matrix A :\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the elements of matrix B :\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("\nMatrix A\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\nMatrix B\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("\nMatrix C\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
c[i][j]+=a[i][k]*b[k][j];
printf("%d\t",c[i][j]);
}
printf("\n");
}
getch();
}