#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int square=num*num;
    printf("\nThe square number of %d is %d \n", num, square);
    return 0;
}
