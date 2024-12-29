/*
#include<stdio.h>
int main()
{
    char name[60];
    int age;
    char address[100];
    char phone[20];

    printf("Enter your name: ");
    scanf("%[^\n]", &name);
    printf("Enter your age: ");
    scanf("%d", &age);
    getchar();
    printf("Enter the address: ");
    scanf("%[^\n]",&address);
    getchar();
    printf("Enter your number: ");
    scanf("%[^\n]", &phone);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Address: %s\n", address);
    printf("Phone Number: %s\n", phone);

}*/
#include <stdio.h>
int main() {
    int customerid, units;
    float charge, total, newcharge;
    char customername[50];
    printf("Enter Customer ID: ");
    scanf("%d", &customerid);
    printf("Enter Customer Name: ");
    scanf("%s", customername);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);
    if (units <= 199) {
        charge = 1.20;
    }
    else if ( 200 <= units < 400) {
        charge = 1.50;
    }
    else if (units >= 400 && units < 600) {
        charge = 1.80;
    }
    else {
        charge = 2.00;
    }
    total = units * charge;
    if (total > 400) {
        newcharge = total * 0.15;
    }
    if (total < 100) {
        total= 100;
    }
    printf("\nCustomer ID: %d\n", customerid);
    printf("Customer Name: %s\n", customername);
    printf("Units Consumed: %d\n", units);
    printf("Total Amount: Rs. %.2f\n", total);
    return 0;
}

