#include<stdio.h>
int main()
{
    long totalpopulation;
    int affected, deaths, hospitalized, healthypeople;

    printf("Enter the total population : ");
    scanf("%ld", &totalpopulation);


    printf("Enter the  number of people affected :");
    scanf("%d", &affected);

    printf("Enter the number oh deaths : ");
    scanf("%d", &deaths);

    printf("Enter the number of people hospitalized : ");
    scanf("%d", &hospitalized);

    healthypeople = totalpopulation - affected;

    printf("The number of healthy people in the country : %d \n", healthypeople);
}
