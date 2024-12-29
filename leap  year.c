#include <stdio.h>
int main()
{
    int year;
    printf("ENTER THE YEAR:");
    scanf("%d", &year);

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("IT IS A LEAP YEAR\n");
        }
        else
        {
            printf("IT IS NOT A LEAP YEAR\n");
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            printf("IT IS A LEAP YEAR\n");
        }
        else
        {
            printf("IT IS NOT A LEAP YEAR\n");
        }
    }
    return 0;
}
