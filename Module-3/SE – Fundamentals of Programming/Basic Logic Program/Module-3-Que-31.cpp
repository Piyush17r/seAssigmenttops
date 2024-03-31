// Convert kilometers into meters 

#include <stdio.h>

void convertKilometersToMeters(float kilometers, float *meters);

int main() {
    float kilometers, meters;
    
    // Input distance in kilometers
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);
    
    // Convert kilometers to meters
    convertKilometersToMeters(kilometers, &meters);
    
    // Output the result
    printf("%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);
    
    return 0;
}

void convertKilometersToMeters(float kilometers, float *meters) {
    // 1 kilometer is equal to 1000 meters
    *meters = kilometers * 1000;
}
