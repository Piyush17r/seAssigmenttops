//  Write a C program to determine eligibility for admission to a professional 
// course based on the following criteria 
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
// in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
// Physics >=140 -------------------------------------- Input the marks obtained in 
// Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
// obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
// 188 Total marks of Maths and Physics : 137 The candidate is not eligible. 
#include <stdio.h>

int main() {
    int phy_marks, chem_marks, math_marks, total_marks, total_math_phy;

    // Input marks obtained in Physics, Chemistry, and Mathematics
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &phy_marks);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chem_marks);

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &math_marks);

    // Input total marks of Maths, Physics, and Chemistry
    printf("Total marks of Maths, Physics, and Chemistry: ");
    scanf("%d", &total_marks);

    // Input total marks of Maths and Physics
    printf("Total marks of Maths and Physics: ");
    scanf("%d", &total_math_phy);

    // Check eligibility based on the criteria
    if (phy_marks >= 55 && chem_marks >= 50 && math_marks >= 65 && total_marks >= 190) {
        printf("The candidate is eligible for admission.\n");
    } else if (total_math_phy >= 140) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}

