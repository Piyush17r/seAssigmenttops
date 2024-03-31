//Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)
#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void initialize(string n, int a) {
        name = n;
        age = a;
    }

    void read_data() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void write_data() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    float percentage;

public:
    void read_data() {
        Person::read_data();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void write_data() {
        Person::write_data();
        cout << "Percentage: " << percentage << endl;
    }
};

class Teacher : public Person {
protected:
    float salary;

public:
    void read_data() {
        Person::read_data();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void write_data() {
        Person::write_data();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Enter student details:\n";
    student.read_data();

    cout << "\nEnter teacher details:\n";
    teacher.read_data();

    cout << "\nStudent details:\n";
    student.write_data();

    cout << "\nTeacher details:\n";
    teacher.write_data();

    return 0;
}
