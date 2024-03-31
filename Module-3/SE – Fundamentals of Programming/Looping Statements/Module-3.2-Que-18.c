//Write a C Program to Print the Multiplication Table of N 
//i. E.g. 5 * 1 = 5 
//ii. 5 * 2 = 10 
//1. . 
//2. . 
//iii. 5 * 10 = 50

#include <stdio.h>

int main() {
    int N;
    
    // Input the number N
    printf("Enter a number: ");
    scanf("%d", &N);

    // Print the multiplication table of N
    printf("Multiplication table of %d:\n", N);
    for (int i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", N, i, N * i);
    }

    return 0;
}
