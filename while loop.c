#include<stdio.h>
void main()
{
    int a=1, n, b=0;
    printf("enter :");
    scanf("%d", &n);

    while(a<=n)
    {
        b=b+a;
        a++;

    }
    printf("sum : %d \n", b);
}
