//for loop
#include<stdio.h>
void main()
{

    int i,n,b=0;

    printf("enter the no. : ");
    scanf("%d", &n);


    for(i=1; i<=n; i++)
    {
        b=b+i;
        printf("b : %d \n", b);
    }

}
