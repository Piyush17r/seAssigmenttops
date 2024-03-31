//Calculate compound interest (Compound Interest formula: 
//a. Formula to calculate compound interest annually is given by: 
//Amount= P(1 + R/100)t 
//b. Compound Interest = Amount – P

#include <stdio.h>
#include <math.h>

float calculateCompoundInterest(float principal, float rate, int time);

int main() {
    float principal, rate, interest;
    int time;
    
    // Input principal amount
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    // Input annual interest rate
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);
    
    // Input time in years
    printf("Enter time in years: ");
    scanf("%d", &time);
    
    // Calculate compound interest
    interest = calculateCompoundInterest(principal, rate, time);
    
    // Output the result
    printf("Compound interest: %.2f\n", interest);
    
    return 0;
}

float calculateCompoundInterest(float principal, float rate, int time) {
    // Calculate amount
    float amount = principal * pow(1 + rate / 100, time);
    
    // Calculate compound interest
    float compoundInterest = amount - principal;
    
    return compoundInterest;
}
