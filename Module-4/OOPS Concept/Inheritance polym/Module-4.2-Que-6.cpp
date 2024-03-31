//Write a C++ Program to show access to Private Public and Protected using
//Inheritance
#include <iostream>

using namespace std;

class Base {
private:
    int private_member_base;

protected:
    int protected_member_base;

public:
    int public_member_base;

    Base() {
        private_member_base = 1;
        protected_member_base = 2;
        public_member_base = 3;
    }
};

class Derived : public Base {
public:
    void access_members() {
        // Accessing public member of Base
        cout << "Accessing public member of Base: " << public_member_base << endl;

        // Accessing protected member of Base
        cout << "Accessing protected member of Base: " << protected_member_base << endl;

        // Accessing private member of Base - Error: private member is not accessible directly in Derived class
        // cout << "Accessing private member of Base: " << private_member_base << endl;
    }
};

int main() {
    Derived derived_obj;

    // Accessing public member of Base through Derived class object
    cout << "Accessing public member of Base through Derived class object: " << derived_obj.public_member_base << endl;

    // Accessing protected member of Base through Derived class object - Error: protected member is not accessible outside Derived class
    // cout << "Accessing protected member of Base through Derived class object: " << derived_obj.protected_member_base << endl;

    // Accessing private member of Base through Derived class object - Error: private member is not accessible outside Base class
    // cout << "Accessing private member of Base through Derived class object: " << derived_obj.private_member_base << endl;

    // Accessing members through member function of Derived class
    derived_obj.access_members();

    return 0;
}
