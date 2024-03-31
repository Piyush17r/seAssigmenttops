// WAP to calculate swap 2 numbers with using of multiplication and division. 
#include <stdio.h>

void swapWithoutVariable(int *a, int *b);

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Swap without using a third variable
    swapWithoutVariable(&num1, &num2);
    
    // Output the swapped numbers
    printf("After swapping without variable:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    
    return 0;
}

void swapWithoutVariable(int *a, int *b) {
    *a = *a * *b;  // First number becomes product of two numbers
    *b = *a / *b;  // Second number becomes quotient (which is the original first number)
    *a = *a / *b;  // First number becomes quotient (which is the original second number)
}
