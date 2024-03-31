//Write a programto swap the two numbers using friend function
//without using third variable
#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number(int n) : num(n) {}

    // Declaration of friend function to swap numbers
    friend void swap(Number& num1, Number& num2);
};

// Definition of friend function to swap numbers
void swap(Number& num1, Number& num2) {
    num1.num = num1.num + num2.num;
    num2.num = num1.num - num2.num;
    num1.num = num1.num - num2.num;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Number num1(a);
    Number num2(b);

    cout << "Before swapping: " << endl;
    cout << "First number: " << num1.num << endl;
    cout << "Second number: " << num2.num << endl;

    // Swap the numbers using friend function
    swap(num1, num2);

    cout << "After swapping: " << endl;
    cout << "First number: " << num1.num << endl;
    cout << "Second number: " << num2.num << endl;

    return 0;
}
