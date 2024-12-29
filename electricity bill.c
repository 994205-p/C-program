#include <stdio.h>

int main() {
    int customerId, unitsConsumed;
    char customerName[50];
    float totalBill = 0.0;

    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Bill calculation
    if (unitsConsumed <= 199) {
        totalBill = unitsConsumed * 1.20;
    } else if (unitsConsumed <= 399) {
        totalBill = 199 * 1.20 + (unitsConsumed - 199) * 1.50;
    } else if (unitsConsumed <= 599) {
        totalBill = 199 * 1.20 + 200 * 1.50 + (unitsConsumed - 399) * 1.80;
    } else {
        totalBill = 199 * 1.20 + 200 * 1.50 + 200 * 1.80 + (unitsConsumed - 599) * 2.00;
    }

    // Apply surcharge if bill exceeds 400
    if (totalBill > 400) {
        totalBill += totalBill * 0.15; // 15% surcharge
    }

    // Ensure minimum bill amount
    if (totalBill < 100) {
        totalBill = 100;
    }

    // Output the result
    printf("\nCustomer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Total Amount Payable: ₹%.2f\n", totalBill);

    return 0;
}
