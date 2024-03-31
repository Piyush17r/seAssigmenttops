// Accept 2 numbers and find out its sum check it size 

#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Output the sum
    printf("Sum of %d and %d is %d.\n", num1, num2, sum);

    // Check the size of the sum
    if (sum >= -32768 && sum <= 32767) {
        printf("Size of sum is 2 bytes.\n");
    } else if (sum >= -2147483648 && sum <= 2147483647) {
        printf("Size of sum is 4 bytes.\n");
    } else {
        printf("Size of sum is greater than 4 bytes.\n");
    }

    return 0;
}
