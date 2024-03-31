//Write a program of to swap the two values using template
#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int intVal1 = 5, intVal2 = 10;
    double doubleVal1 = 3.14, doubleVal2 = 6.28;
    char charVal1 = 'A', charVal2 = 'B';

    // Swap two integers
    cout << "Before swapping integers: " << intVal1 << " " << intVal2 << endl;
    swapValues(intVal1, intVal2);
    cout << "After swapping integers: " << intVal1 << " " << intVal2 << endl;

    // Swap two doubles
    cout << "\nBefore swapping doubles: " << doubleVal1 << " " << doubleVal2 << endl;
    swapValues(doubleVal1, doubleVal2);
    cout << "After swapping doubles: " << doubleVal1 << " " << doubleVal2 << endl;

    // Swap two characters
    cout << "\nBefore swapping characters: " << charVal1 << " " << charVal2 << endl;
    swapValues(charVal1, charVal2);
    cout << "After swapping characters: " << charVal1 << " " << charVal2 << endl;

    return 0;
}
