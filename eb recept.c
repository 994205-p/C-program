#include <stdio.h>

int main() {
    int customer_id;
    char customer_name[100];
    float units_consumed, bill_amount, surcharge = 0, total_amount;

    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter Customer Name: ");
    getchar();
    fgets(customer_name, sizeof(customer_name), stdin);
    printf("Enter Units Consumed: ");
    scanf("%f", &units_consumed);

    if (units_consumed <= 199) {
        bill_amount = units_consumed * 1.20;
    }
    else if (units_consumed >= 200 && units_consumed < 400) {
        bill_amount = units_consumed * 1.50;
    }
    else if (units_consumed >= 400 && units_consumed < 600) {
        bill_amount = units_consumed * 1.80;
    }
    else {
        bill_amount = units_consumed * 2.00;
    }

    if (bill_amount > 400) {
        surcharge = bill_amount * 0.15;
    }

    total_amount = bill_amount + surcharge;

    if (total_amount < 100) {
        total_amount = 100;
    }

    printf("\nElectricity Bill Details\n");
    printf("~-~-~-~-~-~-~-~-~-~-~-~-\n\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s", customer_name);
    printf("Units Consumed: %.2f\n", units_consumed);
    printf("Bill Amount: Rs. %.2f\n", bill_amount);
    if (surcharge > 0) {
        printf("Surcharge (15%%): Rs. %.2f\n", surcharge);
    }
    printf("\nTotal Amount to be Paid: Rs. %.2f\n", total_amount);

    return 0;
}

