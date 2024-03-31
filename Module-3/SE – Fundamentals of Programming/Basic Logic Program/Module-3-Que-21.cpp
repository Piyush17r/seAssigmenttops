//Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
//and without using 3rd variable 

#include <stdio.h>

void swapWithVariable(int *a, int *b);
void swapWithoutVariable(int *a, int *b);

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Swap using a third variable
    swapWithVariable(&num1, &num2);
    printf("After swapping with variable:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    
    // Swap without using a third variable
    swapWithoutVariable(&num1, &num2);
    printf("After swapping without variable:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    
    return 0;
}

void swapWithVariable(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapWithoutVariable(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
