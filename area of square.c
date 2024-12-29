#include<stdio.h>
int calculatearea(int a);
int main()
{
    int a, area;
    printf("Entr the side : ");
    scanf("%d",&a);
    area=calculatearea(a);
    printf("The area of square is : %d \n", area);
    return 0;
}
int calculatearea(int a)
{
    return a*a;
}
