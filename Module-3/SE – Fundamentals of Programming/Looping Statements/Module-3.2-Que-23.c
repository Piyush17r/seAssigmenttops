//Series Program: 
//24. 1 + 2 + 3 + 4 + 5 + ... + n
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum using a for loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of the series 1 + 2 + 3 + ... + %d is %d\n", n, sum);

    return 0;
}
