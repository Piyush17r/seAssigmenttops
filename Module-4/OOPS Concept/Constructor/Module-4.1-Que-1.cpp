//Write a programto find the multiplication values and the cubic values using
//inline function
#include <iostream>

// Inline function to find the multiplication of two numbers
inline int multiply(int a, int b) {
    return a * b;
}

// Inline function to find the cubic value of a number
inline int cubic(int num) {
    return num * num * num;
}

int main() {
    int num1, num2;

    // Input the numbers
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Calculate and display multiplication values
    std::cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << std::endl;

    // Calculate and display cubic values
    std::cout << "Cubic value of " << num1 << " is: " << cubic(num1) << std::endl;
    std::cout << "Cubic value of " << num2 << " is: " << cubic(num2) << std::endl;

    return 0;
}
