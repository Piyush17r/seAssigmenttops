//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>

int main() {
    int n, sum = 0, innerSum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum using nested loops
    for (int i = 1; i <= n; i++) {
        innerSum = 0;
        for (int j = 1; j <= i; j++) {
            innerSum += j;
        }
        sum += innerSum;
    }

    printf("Sum of the series is: %d\n", sum);

    return 0;
}
