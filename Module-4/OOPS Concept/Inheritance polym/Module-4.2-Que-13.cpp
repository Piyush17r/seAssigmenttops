//Write a program to find the max number from given two numbers
//using friend function
#include <iostream>
using namespace std;

class MaxFinder {
private:
    int num1;
    int num2;

public:
    MaxFinder(int a, int b) : num1(a), num2(b) {}

    // Declaration of friend function to find maximum
    friend int findMax(const MaxFinder& obj);
};

// Definition of friend function to find maximum
int findMax(const MaxFinder& obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    MaxFinder numbers(a, b);

    cout << "Maximum number is: " << findMax(numbers) << endl;

    return 0;
}
