#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,temp,a[10],b[10];
clrscr();
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter %d elements : ",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
b[i]=a[i];
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\nThe original elements are :\t");
for(i=0;i<n;i++)
printf("%d\t",b[i]);
printf("\nThe sorted elements are :\t");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
getch();
}