//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 
//82746 
#include <stdio.h>

int main() {
    long int number, reverse = 0, remainder;

    // Input the number
    printf("Enter a number: ");
    scanf("%ld", &number);

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }

    // Print the reversed number
    printf("Reversed number: %ld\n", reverse);

    return 0;
}
