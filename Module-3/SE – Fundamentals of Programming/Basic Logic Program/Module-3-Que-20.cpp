// Accept monthly salary from the user and deduct 10% insurance premium, 
//10% loan installment find out of remaining salary. 
#include <stdio.h>

float calculateInsurancePremium(float salary);
float calculateLoanInstallment(float remainingSalary);

int main() {
    float monthlySalary, remainingSalary;
    
    // Input monthly salary
    printf("Enter monthly salary: Rs ");
    scanf("%f", &monthlySalary);
    
    // Calculate insurance premium
    float insurancePremium = calculateInsurancePremium(monthlySalary);
    
    // Deduct insurance premium
    remainingSalary = monthlySalary - insurancePremium;
    
    // Calculate loan installment
    float loanInstallment = calculateLoanInstallment(remainingSalary);
    
    // Deduct loan installment
    remainingSalary -= loanInstallment;
    
    // Output remaining salary after deductions
    printf("Remaining salary after deductions: Rs %.2f\n", remainingSalary);
    
    return 0;
}

float calculateInsurancePremium(float salary) {
    // Assuming insurance premium is 10% of the salary
    return 0.10 * salary;
}

float calculateLoanInstallment(float remainingSalary) {
    // Assuming loan installment is 10% of the remaining salary after deducting insurance premium
    return 0.10 * remainingSalary;
}
