//Write a C++ program to create a class called Triangle that has private
//member variables for the lengths of its three sides. Implement member
//functions to determine if the triangle is equilateral, isosceles, or scalene
#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    // Constructor
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Function to determine the type of triangle
    void triangleType() {
        if (side1 == side2 && side2 == side3) {
            cout << "Equilateral Triangle" << endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "Isosceles Triangle" << endl;
        } else {
            cout << "Scalene Triangle" << endl;
        }
    }
};

int main() {
    double s1, s2, s3;

    // Input side lengths of the triangle
    cout << "Enter length of side 1: ";
    cin >> s1;
    cout << "Enter length of side 2: ";
    cin >> s2;
    cout << "Enter length of side 3: ";
    cin >> s3;

    // Create Triangle object
    Triangle triangle(s1, s2, s3);

    // Determine the type of triangle
    cout << "The triangle is a ";
    triangle.triangleType();

    return 0;
}
