//Write a C++ Program to find Area of Rectangle using inheritance
#include <iostream>

using namespace std;

class Shape {
protected:
    float length;
    float breadth;

public:
    void set_data(float l, float b) {
        length = l;
        breadth = b;
    }
};

class Rectangle : public Shape {
public:
    float area() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect;
    float length, breadth;

    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    rect.set_data(length, breadth);

    cout << "Area of rectangle: " << rect.area() << endl;

    return 0;
}
