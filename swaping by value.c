#include<stdio.h>
void swapx(int x, int y);
int main()
{
    int a=10, b=20;
    swapx(a,b);
    printf("In the caller: a=%d b=%d \n", a,b);
    return 0;
}
void swapx(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("Inside function : x=%d y=%d \n", x,y);
}
