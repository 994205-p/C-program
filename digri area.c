
#include <stdio.h>

// Recursive function to calculate factorial
long long int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}

int main() {
    int num;

    printf("Enter : ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        long long int result = factorial(num);
        printf(" %lld\n", result);
    }

    return 0;
}
