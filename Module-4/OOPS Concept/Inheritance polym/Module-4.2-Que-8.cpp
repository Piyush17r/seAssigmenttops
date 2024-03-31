//Write a program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading
#include <iostream>

using namespace std;

// Function overloading for addition
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// Function overloading for subtraction
int subtract(int a, int b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

// Function overloading for multiplication
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

// Function overloading for division
int divide(int a, int b) {
    if (b == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
    return a / b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error! Division by zero." << endl;
        return 0.0;
    }
    return a / b;
}

int main() {
    int int_num1 = 10, int_num2 = 5;
    double double_num1 = 10.5, double_num2 = 5.5;

    // Integer operations
    cout << "Integer Operations:\n";
    cout << "Addition: " << add(int_num1, int_num2) << endl;
    cout << "Subtraction: " << subtract(int_num1, int_num2) << endl;
    cout << "Multiplication: " << multiply(int_num1, int_num2) << endl;
    cout << "Division: " << divide(int_num1, int_num2) << endl;

    // Double operations
    cout << "\nDouble Operations:\n";
    cout << "Addition: " << add(double_num1, double_num2) << endl;
    cout << "Subtraction: " << subtract(double_num1, double_num2) << endl;
    cout << "Multiplication: " << multiply(double_num1, double_num2) << endl;
    cout << "Division: " << divide(double_num1, double_num2) << endl;

    return 0;
}
