#include <iostream>

using namespace std;

int main() {
    double side_length;
    
    // Input side length from user
    cout << "Enter the length of a side of the square: ";
    cin >> side_length;
    
    // Calculate area
    double area = side_length * side_length;
    
    // Output the area
    cout << "The area of the square is: " << area << endl;
    
    return 0;
}
