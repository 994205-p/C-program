#include<stdio.h>
void main()
{
    int a;
    printf("Enter the year :");
    scanf("%d", &a);

    if (a%4==0)
    {
        printf("it is a leap year \n");
    }

    else
    {
        printf("It is a not leap year \n");
    }
}
