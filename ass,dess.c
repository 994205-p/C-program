#include<stdio.h>
int main()
{
    int a,j,i=0,temp=0;
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
        for(j=i+1;j<a;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    for(i=0;i<a;i++)
    {
    printf("%d",num[i]);
    }
    return 0;
}


