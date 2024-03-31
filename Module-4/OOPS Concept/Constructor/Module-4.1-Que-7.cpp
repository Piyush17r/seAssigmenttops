//Write a C++ program to implement a class called Date that has private
//member variables for day, month, and year. Include member functions to
//set and get these variables, as well as to validate if the date is valid.

#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }

    // Function to set date
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Function to get day
    int getDay() {
        return day;
    }

    // Function to get month
    int getMonth() {
        return month;
    }

    // Function to get year
    int getYear() {
        return year;
    }

    // Function to validate date
    bool isValidDate() {
        if (year < 0 || month < 1 || month > 12 || day < 1)
            return false;
        if (month == 2) {
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                return day <= 29;
            } else {
                return day <= 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            return day <= 30;
        } else {
            return day <= 31;
        }
    }
};

int main() {
    int d, m, y;

    // Input date
    cout << "Enter day, month, and year (separated by spaces): ";
    cin >> d >> m >> y;

    // Create Date object
    Date date;

    // Set the date
    date.setDate(d, m, y);

    // Check if the date is valid
    if (date.isValidDate()) {
        cout << "Entered date is valid: " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << endl;
    } else {
        cout << "Entered date is invalid." << endl;
    }

    return 0;
}
