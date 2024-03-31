#include <stdio.h>

int main() {
    int customerID;
    char customerName[50];
    float unitConsumed;

    printf("Enter customer ID: ");
    scanf("%d", &customerID);

    printf("Enter customer name: ");
    scanf("%s", customerName);

    printf("Enter unit consumed: ");
    scanf("%f", &unitConsumed);

    float chargePerUnit;

    if (unitConsumed <= 350) {
        chargePerUnit = 1.20;
    } else if (unitConsumed > 350 && unitConsumed <= 600) {
        chargePerUnit = 1.50;
    } else if (unitConsumed > 600 && unitConsumed <= 800) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    float totalAmount = unitConsumed * chargePerUnit;

    if (totalAmount > 800) {
        totalAmount += totalAmount * 0.18;
    }

    if (totalAmount < 256) {
        totalAmount = 256;
    }

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Unit Consumed: %.2f\n", unitConsumed);
    printf("Total Amount: Rs. %.2f\n", totalAmount);

    return 0;
}
