// 1 2 3 6 9 18 27 54... 
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int current = 1;
    for (int i = 1; i <= n; i++) {
        printf("%d ", current);
        if (i % 2 == 0) {
            current *= 2;
        } else {
            current *= 3;
        }
    }

    return 0;
}
