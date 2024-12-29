#include<stdio.h>
void fibonocci(int n)
{
    int n1=0, n2=1, n3;

    if(n>0)
    {

        n3=n1+n2;
        printf("%d", n3);
        fibonocci(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("%d %d \n",0,1 );
    fibonocci(n-2);

    return 0;
}
