//Write a C++ program to create a class called Person that has private 
//member variables for name, age and country. Implement member 
//functions to set and get the values of these variables. 
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Setter functions
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setCountry(string c) {
        country = c;
    }

    // Getter functions
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    string getCountry() const {
        return country;
    }
};

int main() {
    Person person;

    // Set values using setter functions
    person.setName("RAM");
    person.setAge(30);
    person.setCountry("BHARAT");

    // Get values using getter functions and display
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    return 0;
}
