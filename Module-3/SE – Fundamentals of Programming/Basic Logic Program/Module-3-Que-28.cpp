//.Convert years into days and months 
#include <stdio.h>

void convertYearsToDaysMonths(int years, int *days, int *months);

int main() {
    int years, days, months;
    
    // Input number of years
    printf("Enter number of years: ");
    scanf("%d", &years);
    
    // Convert years to days and months
    convertYearsToDaysMonths(years, &days, &months);
    
    // Output the result
    printf("Approximate number of days: %d\n", days);
    printf("Approximate number of months: %d\n", months);
    
    return 0;
}

void convertYearsToDaysMonths(int years, int *days, int *months) {
    // Approximate number of days in a year (365.25)
    float daysInYear = 365.25;
    
    // Calculate total days
    *days = years * daysInYear;
    
    // Calculate total months (using approximate average number of days in a month)
    *months = years * 12;
}
