//Accept the input month number and print number of days in the  // month. 
#include <stdio.h>

int main() {
    int month_number, days;

    // Input month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

    // Check and print corresponding number of days
    switch(month_number) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = 28; // Assuming non-leap year
            break;
        default:
            printf("Invalid month number!\n");
            return 1; // Exit program with error code
    }

    // Print number of days
    printf("Number of days in month %d is: %d\n", month_number, days);

    return 0;
}
