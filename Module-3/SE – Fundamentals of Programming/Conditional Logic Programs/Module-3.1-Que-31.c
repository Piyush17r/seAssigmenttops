//Write a program in C to read any Month Number in integer and display the 
//number of days for this month. 
#include <stdio.h>

int main() {
    int month;

    // Input month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    // Determine the number of days based on the month number
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Number of days in month %d is 31.\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Number of days in month %d is 30.\n", month);
            break;
        case 2:
            printf("Number of days in month %d is 28 or 29 (leap year).\n", month);
            break;
        default:
            printf("Invalid month number!\n");
    }

    return 0;
}
