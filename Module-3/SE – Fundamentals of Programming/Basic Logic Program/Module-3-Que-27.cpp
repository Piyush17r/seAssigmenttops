//Convert days into months 

#include <stdio.h>

float convertDaysToMonths(int days);

int main() {
    int days;
    
    // Input number of days
    printf("Enter number of days: ");
    scanf("%d", &days);
    
    // Convert days to months
    float months = convertDaysToMonths(days);
    
    // Output the result
    printf("Approximate number of months: %.2f\n", months);
    
    return 0;
}

float convertDaysToMonths(int days) {
    return days / 30.4375;
}
