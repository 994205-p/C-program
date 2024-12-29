#include<stdio.h>
int calculatearea(int a, int b);
int main()
{
    int a, b, area;
    printf("Entr the length : ");
    scanf("%d",&a);
    printf("Enter the breath : ");
    scanf("%d", &b);
    area=calculatearea(a,b);
    printf("The area of rectangle is : %d \n", area);
    return 0;
}
int calculatearea(int a, int b)
{
    return a*b;
}
