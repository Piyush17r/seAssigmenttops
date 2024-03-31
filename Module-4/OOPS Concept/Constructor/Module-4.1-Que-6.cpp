//Write a C++ program to implement a class called Employee that has
//private member variables for name, employee ID, and salary. Include
//member functions to calculate and set salary based on employee
//performance. Using of constructor
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor
    Employee(string empName, int empID, double initialSalary) {
        name = empName;
        employeeID = empID;
        salary = initialSalary;
    }

    // Function to calculate salary based on performance
    void calculateSalary(double performanceScore) {
        if (performanceScore >= 10) {
            salary *= 1.1; // 10% increase for good performance
            cout << "Salary increased due to good performance. New salary: Rs " << salary << endl;
        } else if (performanceScore >= 6) {
            salary *= 1.05; // 5% increase for average performance
            cout << "Salary increased due to average performance. New salary: Rs " << salary << endl;
        } else {
            cout << "No salary increase due to poor performance. Current salary: Rs " << salary << endl;
        }
    }

    // Function to set salary directly
    void setSalary(double newSalary) {
        salary = newSalary;
        cout << "Salary set to: Rs" << salary << endl;
    }
};

int main() {
    string empName;
    int empID;
    double initialSalary, performanceScore;

    // Input employee details
    cout << "Enter employee name: ";
    getline(cin, empName);
    cout << "Enter employee ID: ";
    cin >> empID;
    cout << "Enter initial salary: Rs ";
    cin >> initialSalary;

    // Create Employee object
    Employee emp(empName, empID, initialSalary);

    // Calculate salary based on performance
    cout << "\nEnter performance score (between 1 and 10): ";
    cin >> performanceScore;
    emp.calculateSalary(performanceScore);

    // Set salary directly
    double newSalary;
    cout << "\nEnter new salary: Rs";
    cin >> newSalary;
    emp.setSalary(newSalary);

    return 0;
}
