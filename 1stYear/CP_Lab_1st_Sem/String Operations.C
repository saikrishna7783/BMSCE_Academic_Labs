#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int slength(char s[50])
{
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}

void sconcat(char s1[50],char s2[50],char s12[100])
{
    int i,j;
    for(i=0;i<slength(s1);i++)
    s12[i]=s1[i];
    for(j=0;j<slength(s2);j++)
    s12[i++]=s2[j];
    s12[i]='\0';
}

void scompare(char s1[50],char s2[50])
{
    int i,flag=0;
    if(slength(s1)!=slength(s2))
    {
	printf("Strings are not equal!!");
    }
    else
    {
	for(i=0;i<slength(s1);i++)
	{
	    if(s1[i]!=s2[i])
	    {
		flag=1;
		break;
	    }
	}
	if(flag==1)
	printf("Strings are not equal!");
	else
	printf("Strings are equal");
    }
}

void main()
{
    char s1[50],s2[50],c[100];
    int len,choice;
    clrscr();
    while(1)
    {
	printf("\n\nMain Menu\n");
	printf("1) Compare Strings\n2) Concatenate Strings\n3) String Length\n4) Exit");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	fflush(stdin);
	switch(choice)
	{
	    case 1: printf("Enter the 1st string : ");
	    scanf("%s",s1);
	    printf("Enter the 2nd string : ");
	    scanf("%s",s2);
	    scompare(s1,s2);
	    break;
	    case 2: printf("Enter the 1st string : ");
	    scanf("%s",s1);
	    printf("Enter the 2nd string : ");
	    scanf("%s",s2);
	    sconcat(s1,s2,c);
	    printf("\nThe concatenated string is %s",c);
	    break;
	    case 3:printf("Enter a string : ");
	    scanf("%s",s1);
	    len=slength(s1);
	    printf("\nThe length of the string is %d",len);
	    break;
	    case 4:exit(0);
	    default:printf("Invalid inputs!");
	}
    }
}