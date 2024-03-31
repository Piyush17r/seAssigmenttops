// Calculate 5 numbers from user and calculate number of even and odd using 
//of while loop 
#include <stdio.h>

int main() {
    int count = 0; // Counter to keep track of how many numbers have been entered
    int even_count = 0; // Counter to keep track of the number of even numbers
    int odd_count = 0; // Counter to keep track of the number of odd numbers
    int number; // Variable to hold each number entered by the user

    printf("Enter 5 numbers:\n");

    // Loop to input numbers and calculate even and odd counts
    while (count < 5) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);
        
        if (number % 2 == 0) {
            even_count++; // Increment the even count if the number is even
        } else {
            odd_count++; // Increment the odd count if the number is odd
        }
        
        count++; // Increment the counter
    }

    // Print the counts of even and odd numbers
    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);

    return 0;
}
