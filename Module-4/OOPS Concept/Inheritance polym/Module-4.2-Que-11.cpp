//Write a program to calculate the area of circle, rectangle and triangle
//using Function Overloading
//Rectangle: Area * breadth
//Triangle: ½ *Area* breadth
//Circle: Pi * Area *Area
#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

// Function to calculate the area of a circle
double area(double radius) {
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
double area(double length, double breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle
double area(double base, double height, char triangle = 'r') {
    if (triangle == 'r') { // Regular triangle
        return 0.5 * base * height;
    } else if (triangle == 'e') { // Equilateral triangle
        return (sqrt(3) / 4) * base * base;
    } else {
        cout << "Invalid triangle type specified." << endl;
        return 0.0;
    }
}

int main() {
    double radius, length, breadth, base, height;

    // Area of a circle
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;

    // Area of a rectangle
    cout << "\nEnter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle: " << area(length, breadth) << endl;

    // Area of a triangle (regular)
    cout << "\nEnter base and height of the regular triangle: ";
    cin >> base >> height;
    cout << "Area of the regular triangle: " << area(base, height) << endl;

    // Area of an equilateral triangle
    cout << "\nEnter base of the equilateral triangle: ";
    cin >> base;
    cout << "Area of the equilateral triangle: " << area(base, 0, 'e') << endl;

    return 0;
}
