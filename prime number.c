#include<stdio.h>
int primenumber(int a);
int main()
{
    int a, nature;
    printf("Enter the number : ");
    scanf("%d", &a);
    nature=primenumber(a);
    if( a%a==0 && a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0)
    {
        printf("\nIt is a PRRIME NUMBER\n");

    }
    else if(a==2)
    {
        printf("It is a EVEN PRRIME NUMBER");
    }
    else
    {
        printf("\nIt is NOT a PRRIME NUMBER\n");
    }
    return 0;
}
int primenumber(int a)
{
    return a;
}
