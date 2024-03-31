//Accept 5 employees name and salary and count average and total salary
#include <stdio.h>

int main() {
    char names[5][50]; // Array to store names of 5 employees, each name can have up to 50 characters
    float salaries[5]; // Array to store salaries of 5 employees
    float totalSalary = 0, averageSalary;
    
    // Input names and salaries of 5 employees
    printf("Enter names and salaries of 5 employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d name: ", i + 1);
        scanf("%s", names[i]);
        
        printf("Employee %d salary: ", i + 1);
        scanf("%f", &salaries[i]);
        
        // Add the salary to the total salary
        totalSalary += salaries[i];
    }
    
    // Calculate average salary
    averageSalary = totalSalary / 5;
    
    // Output total and average salary
    printf("\nTotal salary of all employees: %.2f\n", totalSalary);
    printf("Average salary of all employees: %.2f\n", averageSalary);
    
    return 0;
}
