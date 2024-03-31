// WAP to convert years into days and days into years 
#include <stdio.h>

void yearsToDays(int years, int *days);
void daysToYears(int days, int *years);

int main() {
    int years, days;
    
    // Convert years to days
    printf("Enter number of years: ");
    scanf("%d", &years);
    yearsToDays(years, &days);
    printf("%d years is approximately %d days.\n", years, days);
    
    // Convert days to years
    printf("Enter number of days: ");
    scanf("%d", &days);
    daysToYears(days, &years);
    printf("%d days is approximately %d years.\n", days, years);
    
    return 0;
}

void yearsToDays(int years, int *days) {
    *days = years * 365;
}

void daysToYears(int days, int *years) {
    *years = days / 365;
}
