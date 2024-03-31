//  Calculate person’s insurance premium based on salary 
#include <stdio.h>

float calculateInsurancePremium(float salary);

int main() {
    float salary, premium;
    
    // Ask the user to enter the salary
    printf("Enter the salary: ");
    scanf("%f", &salary);
    
    // Calculate the insurance premium
    premium = calculateInsurancePremium(salary);
    
    // Output the insurance premium
    printf("Insurance premium:Rs %.2f\n", premium);
    
    return 0;
}

float calculateInsurancePremium(float salary) {
    // Assuming premium is 10% of the salary
    float premium = 0.10 * salary;
    return premium;
}
