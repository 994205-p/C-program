//No argument with return type

#include<stdio.h>
int calculatesumm();
int main()
{
    int result;
    result=calculatesum();
    printf("The sum of two numbers %d \n", result);
    return 0;
}
int calculatesum()
{
    int a,b;
    printf("Enter the number :");
    scanf("%d",&a);
    printf("Enter the number :");
    scanf("%d", &b);
    return a+b;

}
