#include<stdio.h>
int oddoreven(int n);
int main()
{
    int n, nature;
    printf("Enter the number : ");
    scanf("%d", &n);
    nature= oddoreven(n);
    if(n&1)
    {
        printf("\nThe number is odd \n");
    }
    else{
        printf("\nThe number is even \n");
    }
    return 0;
}
int oddoreven(int n)
{
    return &n;
}
