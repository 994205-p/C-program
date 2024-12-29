
#include <stdio.h>

int main() {
    double num1, num2, result;
    int choice;

    printf("1. Add 2. Sub 3. Mul 4. Div 5. Mod 6. Square\n");
    printf("enter the choice: ");
    scanf("%d", &choice);
    if (choice == 6) {
        printf("enter the choice: ");
        scanf("%lf", &num1);
        result = num1 * num1;  // Square of the number
    } else if (choice == 5) {

        int int_num1, int_num2;
        printf("enter the choice: ");
        scanf("%d %d", &int_num1, &int_num2);
        result = int_num1 % int_num2;  // Modulus
    } else {
        scanf("%lf %lf", &num1, &num2);
        if (choice == 1) result = num1 + num2;
        else if (choice == 2) result = num1 - num2;
        else if (choice == 3) result = num1 * num2;
        else if (choice == 4) result = num2 != 0 ? num1 / num2 : 0;
    }
    printf("Result: %.2f\n", result);
    return 0;
}

