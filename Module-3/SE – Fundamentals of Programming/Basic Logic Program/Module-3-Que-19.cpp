// C program to calculate Compound Interest 

#include <stdio.h>
#include <math.h>

float calculateCompoundInterest(float principal, float rate, int time, int compoundFreq);

int main() {
    float principal, rate, interest;
    int time, compoundFreq;
    
    // Input principal amount
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    // Input annual interest rate
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);
    
    // Input time in years
    printf("Enter time in years: ");
    scanf("%d", &time);
    
    // Input number of times interest is compounded per unit 't'
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &compoundFreq);
    
    // Calculate compound interest
    interest = calculateCompoundInterest(principal, rate / 100, time, compoundFreq);
    
    // Output the result
    printf("Compound interest: %.2f\n", interest);
    
    return 0;
}

float calculateCompoundInterest(float principal, float rate, int time, int compoundFreq) {
    // Calculate compound interest
    float amount = principal * pow(1 + rate / compoundFreq, compoundFreq * time);
    float interest = amount - principal;
    return interest;
}
