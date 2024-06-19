#include<stdio.h>
#include<conio.h>
void main()
{
char n[30];
int units;
double bill=100;
clrscr();
printf("Name of customer : ");
scanf("%s",n);
printf("Units consumed : ");
scanf("%d",&units);
if(units<=200)
bill+=units*0.8;
else if(units>200 && units<=300)
bill+=200*0.8+(units-200)*0.9;
else
bill+=200*0.8+100*0.9+(units-300)*1;
if(bill>400)
bill+=0.15*bill;
printf("\nElectricity Bill\n====================\n");
printf("Name\t:%s\nUnits\t:%d\nTotal Bill\t:%0.2f",n,units,bill);
getch();
}