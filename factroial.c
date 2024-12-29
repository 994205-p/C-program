#include<stdio.h>
long long factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if(num<0)
    {
        printf("No Factorial \n");
    }
    else
    {
        printf("%d",factorial(num));
    }
    return 0;
}
