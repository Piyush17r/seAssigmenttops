//.Convert minutes into seconds and hours 

#include <stdio.h>

void convertMinutes(int minutes, int *hours, int *seconds);

int main() {
    int minutes, hours, seconds;
    
    // Input number of minutes
    printf("Enter number of minutes: ");
    scanf("%d", &minutes);
    
    // Convert minutes to hours and seconds
    convertMinutes(minutes, &hours, &seconds);
    
    // Output the result
    printf("Approximate number of hours: %d\n", hours);
    printf("Approximate number of seconds: %d\n", seconds);
    
    return 0;
}

void convertMinutes(int minutes, int *hours, int *seconds) {
    // Calculate number of hours
    *hours = minutes / 60;
    
    // Calculate remaining minutes after converting to hours
    int remainingMinutes = minutes % 60;
    
    // Calculate number of seconds
    *seconds = remainingMinutes * 60;
}
