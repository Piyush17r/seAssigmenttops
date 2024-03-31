//Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)
#include <iostream>
#include <string>

using namespace std;

class Students {
protected:
    int roll_number;

public:
    void set_roll_number(int roll) {
        roll_number = roll;
    }
};

class Test : public Students {
protected:
    int subject1_marks;
    int subject2_marks;

public:
    void set_marks(int marks1, int marks2) {
        subject1_marks = marks1;
        subject2_marks = marks2;
    }
};

class Result : public Test {
private:
    int total_marks;

public:
    void calculate_total_marks() {
        total_marks = subject1_marks + subject2_marks;
    }

    void display_result() {
        cout << "Roll Number: " << roll_number << endl;
        cout << "Subject 1 Marks: " << subject1_marks << endl;
        cout << "Subject 2 Marks: " << subject2_marks << endl;
        cout << "Total Marks: " << total_marks << endl;
    }
};

int main() {
    Result student_result;

    // Setting roll number
    student_result.set_roll_number(101);

    // Setting marks for subjects
    student_result.set_marks(85, 90);

    // Calculating total marks
    student_result.calculate_total_marks();

    // Displaying result
    cout << "Student Result:\n";
    student_result.display_result();

    return 0;
}
