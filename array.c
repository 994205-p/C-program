#include<stdio.h>
int main()
{
    int a,i,sum=0;
    printf("Enter the array: ");
    scanf("%d",&a);
    int num[a];
    for(i=0;i<a;i++)
    {
        printf("Enter the number: ");
        scanf("%d",&num[i]);
    }
    for(i=0;i<a;i++)
    {
        sum=sum+num[i];
    }
     printf("\n Total= %d",sum);
     float avg;
     avg=sum/a;
     printf("\n avg: %lf", avg);

    return 0;
}
