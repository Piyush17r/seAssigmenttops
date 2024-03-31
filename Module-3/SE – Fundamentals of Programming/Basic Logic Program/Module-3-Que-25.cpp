//Accept 5 expense from user and find average of expense 
#include <stdio.h>

int main() {
    float expenses[5];
    float total = 0, average;
    
    // Input 5 expenses
    printf("Enter 5 expenses:\n");
    for (int i = 0; i < 5; i++) {
        printf("Expense %d: ", i + 1);
        scanf("%f", &expenses[i]);
        
        // Add the expense to the total
        total += expenses[i];
    }
    
    // Calculate the average
    average = total / 5;
    
    // Output the average
    printf("Average expense: %.2f\n", average);
    
    return 0;
}
