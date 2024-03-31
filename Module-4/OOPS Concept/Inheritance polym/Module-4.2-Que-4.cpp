//Write a C++ Program display Student Mark sheet using Multiple inheritance
#include <iostream>
#include <string>

using namespace std;

class PersonalDetails {
protected:
    string name;
    int RollNo;

public:
    void read_personal_details() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> RollNo;
    }

    void display_personal_details() {
        cout << "\nPersonal Details:\n";
        cout << "Name: " << name << endl;
        cout << "RollNo: " << RollNo<< endl;
    }
};

class AcademicDetails {
protected:
    float marks[5];

public:
    void read_academic_details() {
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; ++i) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void display_academic_details() {
        cout << "\nAcademic Details:\n";
        for (int i = 0; i < 5; ++i) {
            cout << "Subject " << i + 1 << " Marks: " << marks[i] << endl;
        }
    }
};

class Student : public PersonalDetails, public AcademicDetails {
public:
    void read_student_details() {
        read_personal_details();
        read_academic_details();
    }

    void display_student_details() {
        display_personal_details();
        display_academic_details();
    }
};

int main() {
    Student student;
    cout << "Enter student details:\n";
    student.read_student_details();
    cout << "\nStudent Mark Sheet:\n";
    student.display_student_details();
    return 0;
}
