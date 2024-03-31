//Write a program to concatenate the two strings using Operator Overloading
#include <iostream>
#include <cstring>

using namespace std;

class MyString {
private:
    char* buffer;

public:
    // Constructor
    MyString(const char* initialInput) {
        if (initialInput != nullptr) {
            buffer = new char[strlen(initialInput) + 1];
            strcpy(buffer, initialInput);
        } else {
            buffer = nullptr;
        }
    }

    // Copy constructor
    MyString(const MyString& copySource) {
        if (copySource.buffer != nullptr) {
            buffer = new char[strlen(copySource.buffer) + 1];
            strcpy(buffer, copySource.buffer);
        } else {
            buffer = nullptr;
        }
    }

    // Destructor
    ~MyString() {
        if (buffer != nullptr) {
            delete[] buffer;
        }
    }

    // Overloading + operator to concatenate two MyString objects
    MyString operator+(const MyString& other) {
        if (other.buffer == nullptr) {
            return *this;
        }

        MyString newString("");

        if (buffer != nullptr) {
            newString.buffer = new char[strlen(buffer) + strlen(other.buffer) + 1];
            strcpy(newString.buffer, buffer);
            strcat(newString.buffer, other.buffer);
        } else {
            newString.buffer = new char[strlen(other.buffer) + 1];
            strcpy(newString.buffer, other.buffer);
        }

        return newString;
    }

    // Overloading assignment operator
    MyString& operator=(const MyString& other) {
        if (this == &other) {
            return *this;
        }

        if (buffer != nullptr) {
            delete[] buffer;
        }

        if (other.buffer == nullptr) {
            buffer = nullptr;
            return *this;
        }

        buffer = new char[strlen(other.buffer) + 1];
        strcpy(buffer, other.buffer);

        return *this;
    }

    // Function to display the string
    void display() const {
        cout << buffer;
    }
};

int main() {
    MyString string1("Hello, ");
    MyString string2("world!");

    MyString result = string1 + string2;

    cout << "Concatenated string: ";
    result.display();
    cout << endl;

    return 0;
}
