#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int i, rem, sum=0;
    for(i=1; i<n; i++)
    {
        rem=n%i;
        if(rem==0)
        {
            sum=sum+i;
        }

    }
    if(sum==n)
        {
            printf("%d is a perfect number", n);
        }
        else
        {
            printf("%d is not a perfect number", n);
        }
    return 0;
}
