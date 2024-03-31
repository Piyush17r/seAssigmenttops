//Write a C++ Program to illustrates the use of Constructors in multilevel
//inheritance
#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() {
        cout << "Base class constructor called" << endl;
    }
};

// Derived class inheriting from Base
class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }
};

// Further derived class inheriting from Derived
class FurtherDerived : public Derived {
public:
    FurtherDerived() {
        cout << "FurtherDerived class constructor called" << endl;
    }
};

int main() {
    // Creating an object of FurtherDerived class
    FurtherDerived obj;
    
    return 0;
}
