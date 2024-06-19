#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
int rno,mrks;
char n[20],grd;
}
st[60];

void main()
{
int n,i;
float s=0,avg;
clrscr();
printf("Enter the number of students : ");
scanf("%d",&n);
printf("Enter student details (Roll number, Name, Marks, Grade)\n");
for(i=0;i<n;i++)
{
printf("Student %d : ",i+1);
scanf("%d%s%d%*c%c",&st[i].rno,st[i].n,&st[i].mrks,&st[i].grd);
s+=st[i].mrks;
}
avg=s/n;
printf("The student report is as :-");
printf("\nRoll no\t\tName\t\tMarks\tGrade\tPerformance");
for(i=0;i<n;i++)
{
printf("\n%d\t\t%s\t\t%d\t%c",st[i].rno,st[i].n,st[i].mrks,st[i].grd);
if(st[i].mrks>=avg)
printf("\t- Above average performance");
else
printf("\t- Below average performance");
}
getch();
}