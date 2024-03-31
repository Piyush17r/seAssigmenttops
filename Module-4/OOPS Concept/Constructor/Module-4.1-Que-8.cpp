//Write a C++ program to implement a class called Student that has private
//member variables for name, class, roll number, and marks. Include
//member functions to calculate the grade based on the marks and display
//the student's information. Accept address from each student implement
//using of aggregation
#include <iostream>
#include <string>
using namespace std;

// Address structure
struct Address {
    string street;
    string city;
    string state;
    int zipcode;
};

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    int marks;
    Address address;

public:
    // Constructor
    Student(string studentName, string sClass, int roll, int studentMarks, Address addr) {
        name = studentName;
        studentClass = sClass;
        rollNumber = roll;
        marks = studentMarks;
        address = addr;
    }

    // Function to calculate grade based on marks
    char calculateGrade() {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }

    // Function to display student information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        cout << "Address: " << address.street << ", " << address.city << ", " << address.state << ", " << address.zipcode << endl;
    }
};

int main() {
    // Address input
    Address studentAddress;
    cout << "Enter street: ";
    getline(cin, studentAddress.street);
    cout << "Enter city: ";
    getline(cin, studentAddress.city);
    cout << "Enter state: ";
    getline(cin, studentAddress.state);
    cout << "Enter zipcode: ";
    cin >> studentAddress.zipcode;
    cin.ignore(); // Ignore newline character in the input buffer

    // Student input
    string studentName, studentClass;
    int rollNumber, marks;

    cout << "\nEnter student name: ";
    getline(cin, studentName);
    cout << "Enter class: ";
    getline(cin, studentClass);
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter marks: ";
    cin >> marks;

    // Create Student object
    Student student(studentName, studentClass, rollNumber, marks, studentAddress);

    // Display student information
    cout << "\nStudent Information:\n";
    student.displayInfo();

    return 0;
}
