#include<stdio.h>
int calculatesum(int a, int b);
int main()
{
    int a, b, sum;
    printf("Enter the number :");
    scanf("%d",&a);
    printf("Enter the number :");
    scanf("%d", &b);
    sum=calculatesum(a,b);
    printf("The sum of %d and %d is %d", a,b, sum);
    return 0;
}
int calculatesum(int a, int b)
{
    return a+b;
}
