//Write a C++ program to create a class called Car that has private
//member variables for company, model, and year. Implement member
//functions to get and set these variables

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    // Constructor
    Car(string comp, string mdl, int yr) {
        company = comp;
        model = mdl;
        year = yr;
    }

    // Getter functions
    string getCompany() {
        return company;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

    // Setter functions
    void setCompany(string comp) {
        company = comp;
    }

    void setModel(string mdl) {
        model = mdl;
    }

    void setYear(int yr) {
        year = yr;
    }
};

int main() {
    // Create a Car object
    Car myCar("Toyota", "Corolla", 2022);

    // Display initial values
    cout << "Initial Car Details:" << endl;
    cout << "Company: " << myCar.getCompany() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

    // Modify some details
    myCar.setCompany("Honda");
    myCar.setModel("Civic");
    myCar.setYear(2023);

    // Display modified values
    cout << "\nModified Car Details:" << endl;
    cout << "Company: " << myCar.getCompany() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

    return 0;
}
