#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[10],key,mid,low,high,flag=0;
clrscr();
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter %d elements in ascending order : ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter key element to search : ");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
flag=1;
break;
}
if(key>a[mid])
low=mid+1;
else
high=mid-1;
}
if(flag==1)
printf("Successfully found %d at %d",key,mid+1);
else
printf("Search unsuccessful!");
getch();
}