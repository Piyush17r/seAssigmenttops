//. Write a program in C to calculate and print the electricity bill of a given 
//customer. The customer ID, name, and unit consumed by the user should 
//be captured from the keyboard to display the total amount to be paid to the 
//customer. The charge are as follow : 
//Unit . Charge/unit 
// upto  @1.20 
//350 and above but less than 600 @1.50 
//600 and above but less than 800  @1.80 
//800 and above  @2.00
//If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe 
//minimum bill should be of Rs. 256/- 

#include <stdio.h>

int main() {
    int customer_id, unit_consumed;
    char customer_name[50];
    float charge_per_unit, total_amount, surcharge = 0;

    // Input customer details
    printf("Enter customer ID: ");
    scanf("%d", &customer_id);

    printf("Enter customer name: ");
    scanf("%s", customer_name);

    printf("Enter unit consumed: ");
    scanf("%d", &unit_consumed);

    // Calculate charges based on units consumed
    if (unit_consumed <= 350) {
        charge_per_unit = 1.20;
    } else if (unit_consumed > 350 && unit_consumed <= 600) {
        charge_per_unit = 1.50;
    } else if (unit_consumed > 600 && unit_consumed <= 800) {
        charge_per_unit = 1.80;
    } else {
        charge_per_unit = 2.00;
    }

    // Calculate total amount
    total_amount = unit_consumed * charge_per_unit;

    // Apply surcharge if total amount exceeds Rs. 800
    if (total_amount > 800) {
        surcharge = total_amount * 0.18;
        total_amount += surcharge;
    }

    // Ensure minimum bill is Rs. 256
    if (total_amount < 256) {
        total_amount = 256;
    }

    // Print the bill details
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Unit Consumed: %d\n", unit_consumed);
    printf("Total Amount: Rs. %.2f\n", total_amount);

    return 0;
}
