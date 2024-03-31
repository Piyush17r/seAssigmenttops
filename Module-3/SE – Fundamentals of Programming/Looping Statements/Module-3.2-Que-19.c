//19. Patterns:
#include <stdio.h>

int main() {
    int rows = 5;
    int num = 1;
    char alpha = 'A';
    
    // Loop through rows
    for (int i = 1; i <= rows; i++) {
        int num = 1;

        // Print 1's and 0's for each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num; // Alternate between 1 and 0
        }

        printf("\n");
    }

    // Printing the first pattern with numbers
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    printf("\n");

    // Resetting values for the second pattern
    num = 1;
    alpha = 'A';

    // Printing the second pattern with alphabets
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", alpha);
            alpha++;
        }
        printf("\n");
    }

    printf("\n");

    // Printing the third pattern with asterisks
    for (int i = 1; i <= rows; i++) {
        // Printing spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // Printing asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }
        printf("\n");
        
        
    }
    

    return 0;
}
