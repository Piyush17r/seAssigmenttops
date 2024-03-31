//Convert temperature Fahrenheit to Celsius

#include <stdio.h>

float fahrenheitToCelsius(float fahrenheit);

int main() {
    float fahrenheit, celsius;
    
    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    // Convert Fahrenheit to Celsius
    celsius = fahrenheitToCelsius(fahrenheit);
    
    // Output temperature in Celsius
    printf("Temperature in Celsius: %.2f\n", celsius);
    
    return 0;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

