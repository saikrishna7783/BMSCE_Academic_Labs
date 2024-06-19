#include<stdio.h>
#include<math.h>
int main()
{
    float a[10],*ptr,mean,std,sum=0,sumstd=0,n;
    int i;
    printf("Enter the number of elements : ");
    scanf("%f",&n);
    printf("Enter the array elements : ");
    ptr=a;
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        sum+=(*ptr);
        ptr++;
    }
    mean=sum/n;
    ptr=a;
    for(i=0;i<n;i++)
    {
        sumstd+=pow(*ptr-mean,2);
        ptr++;
    }
    std=sqrt(sumstd/n);
    printf("Sum=%f\nMean=%f\nStandard Deviation=%f",sum,mean,std);
    return 0;
}