//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>

int main() {
    int n, sum = 0, innerSum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum using a single loop
    for (int i = 1; i <= n; i++) {
        innerSum += i;
        sum += innerSum;
    }

    printf("Sum of the series is: %d\n", sum);

    return 0;
}
