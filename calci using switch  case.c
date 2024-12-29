#include<stdio.h>

int main() {
    int choice;
    double num1, num2, result;
    int num1_int, num2_int;


    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Square of a number\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);


    switch(choice) {
        case 1:
            // Addition
            printf("Enter the First number: ");
            scanf("%lf", &num1);
            printf("Enter the secenod number: ");
            scanf(" %lf",  &num2);
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case 2:
            // Subtraction
            printf("Enter the First number: ");
            scanf("%lf", &num1);
            printf("Enter the secenod number: ");
            scanf(" %lf",  &num2);
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case 3:
            // Multiplication
            printf("Enter the First number: ");
            scanf("%lf", &num1);
            printf("Enter the secenod number: ");
            scanf(" %lf",  &num2);
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case 4:
            // Division
            printf("Enter the Divident number: ");
            scanf("%lf", &num1);
            printf("Enter the Divisor number: ");
            scanf(" %lf",  &num2);
            if(num2 != 0) {
                result = num1 / num2;
                printf("Quotient: %.2lf\n", result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;

        case 5:
            // Modulus
            printf("Enter the Divident number: ");
            scanf("%d", &num1_int);
            printf("Enter the Divisor number: ");
            scanf(" %d",  &num2_int);

            if(num2_int != 0) {
                result = num1_int % num2_int;
                printf("Remainder: %.0lf\n", result);  // Modulus results in an integer value
            } else {
                printf("Error! Division by zero.\n");
            }
            break;

        case 6:
            // Square of a number
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = num1 * num1;
            printf("Result: %.2lf\n", result);
            break;

        default:
            printf("Invalid choice! Please select a valid operation (1-6).\n");
            break;
    }

    return 0;
}

