// Write a C program to check whether a triangle can be formed with the given 
//values for the angles. .
#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    // Input the three angles of the triangle
    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    // Check if the sum of the angles equals 180 degrees
    if (angle1 + angle2 + angle3 == 180) {
        printf("The given angles can form a triangle.\n");
    } else {
        printf("The given angles cannot form a triangle.\n");
    }

    return 0;
}
