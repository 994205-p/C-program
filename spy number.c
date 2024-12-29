#include <stdio.h>

// Function to check if a 3-digit number is a Spy Number
int SpyNumber(int num)
    {
        printf("Please enter a 3-digit number.\n");
        return 0;
    }

    // Extract individual digits
    int hundreds = num / 100;           // Get the hundreds place digit
    int tens = (num / 10) % 10;         // Get the tens place digit
    int units = num % 10;               // Get the units place digit

    // Calculate sum and product of the digits
    int sum = hundreds + tens + units;
    int product = hundreds * tens * units;

    // Check if sum and product are equal
    return (sum == product);
}

int main() {
    int number;

    // Input from the user
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    // Check and display result
    if (isSpyNumber(number)) {
        printf("%d is a Spy Number.\n", number);
    } else {
        printf("%d is not a Spy Number.\n", number);
    }

    return 0;
}7
