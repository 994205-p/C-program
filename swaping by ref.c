#include<stdio.h>
void swap(int *x, int *y);
int main()
{
    int a=20, b=10;
    swap(&a,&b);
    printf("The assigned value: a=%d b=%d\n", a,b);
    return 0;
}
void swap(int *x, int *y)
{

    int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("The swaped value: x=%d y=%d\n",*x,*y);
    return 0;
}

