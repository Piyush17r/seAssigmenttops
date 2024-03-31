//Write a C++ program to create a class called Rectangle that has private 
//member variables for length and width. Implement member functions to 
//calculate the rectangle's area and perimeter. 
#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }

    // Function to calculate area
    double calculateArea() {
        return length * width;
    }

    // Function to calculate perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    // Create a Rectangle object with length 5 and width 4
    Rectangle myRectangle(5.0, 4.0);

    // Calculate and display the area
    cout << "Area of the rectangle: " << myRectangle.calculateArea() << endl;

    // Calculate and display the perimeter
    cout << "Perimeter of the rectangle: " << myRectangle.calculatePerimeter() << endl;

    return 0;
}
