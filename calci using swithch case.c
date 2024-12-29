#include<stdio.h>
void main()
{
    int a, b;
    char op;

    printf("Enter the 1st value : ");
    scanf("%d", &a);

    printf("Enter the 2nd value : ");
    scanf("%d", &b);

    printf("Enter the op : ");
    scanf("\n %c", &op);

    switch(op)
    {
       case '+':
       printf("a+b : %d", a+b);
       break;

       case '-':
       printf("a-b : %d", a-b);
       break;

       case '*':
       printf("a*b : %d", a*b);
       break;

       case '/':
       printf("a/b : %d", a/b);
       break;

       case '%':
       printf("a%b : %d", a%b);
       break;

    }
}
