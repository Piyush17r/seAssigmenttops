//Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display
//data. (Single Inheritance)
#include <iostream>
#include <string>

using namespace std;

class Cricketer {
protected:
    string name;
    int age;

public:
    void input_data() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class Batsman : public Cricketer {
private:
    int total_runs;
    float average_runs;
    int best_performance;

public:
    void input_data() {
        Cricketer::input_data(); // Call base class function to input name and age
        cout << "Enter total runs: ";
        cin >> total_runs;
        cout << "Enter best performance: ";
        cin >> best_performance;
    }

    void calculate_average_runs() {
        cout << "Enter number of innings played: ";
        int innings;
        cin >> innings;
        if (innings != 0)
            average_runs = static_cast<float>(total_runs) / innings;
        else
            average_runs = 0;
    }

    void display_data() {
        cout << "\nBatsman Details:\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << total_runs << endl;
        cout << "Average Runs: " << average_runs << endl;
        cout << "Best Performance: " << best_performance << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.input_data();
    batsman.calculate_average_runs();
    batsman.display_data();
    return 0;
}
