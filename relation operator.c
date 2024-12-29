#include<stdio.h>
int main()
{
    int a;
    int b;

    printf("enter the a value: ");
    scanf("%d", &a);

    printf("enter the b value: ");
    scanf("%d", &b);

    printf("\nGiven : \n \t a= %d \n", a);
    printf("\t b= %d \n", b);

    a<b;
    printf("a<b  : %d \n", a<b);

     a>b;
    printf("a>b  : %d \n", a>b);

    a<=b;
    printf("a<=b : %d \n", a<=b);

    a>=b;
    printf("a>=b : %d \n", a>=b);

    a==b;
    printf("a==b : %d \n", a==b);

    a!=b;
    printf("a!=b : %d \n", a!=b);
}
