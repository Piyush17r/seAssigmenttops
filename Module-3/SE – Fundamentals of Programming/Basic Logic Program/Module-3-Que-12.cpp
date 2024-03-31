//Calculate the total number of apples required

#include <stdio.h>

int main() {
    int num_students;
    
    // Ask the user to enter the number of students
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    
    // Calculate the total number of apples required
    int total_apples = num_students * 5;
    
    // Output the result
    printf("Total apples required: %d\n", total_apples);
    
    return 0;
}
