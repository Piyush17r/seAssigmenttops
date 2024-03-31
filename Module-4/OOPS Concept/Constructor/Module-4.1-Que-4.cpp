//Write a C++ program to implement a class called Bank Account that has
//private member variables for account number and balance. Include
//member functions to deposit and withdraw money from the account.
#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }

    // Function to deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of Rs" << amount << " successful.\n";
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds. Withdrawal failed.\n";
        } else {
            balance -= amount;
            cout << "Withdrawal of Rs" << amount << " successful.\n";
        }
    }

    // Function to get balance
    double getBalance() {
        return balance;
    }
};

int main() {
    int accNum;
    double initialBalance, depositAmount, withdrawAmount;

    // Input account number and initial balance
    cout << "Enter account number: ";
    cin >> accNum;
    cout << "Enter initial balance: Rs";
    cin >> initialBalance;

    // Create BankAccount object
    BankAccount account(accNum, initialBalance);

    // Deposit
    cout << "\nEnter amount to deposit: Rs";
    cin >> depositAmount;
    account.deposit(depositAmount);

    // Withdraw
    cout << "\nEnter amount to withdraw: Rs";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    // Display final balance
    cout << "\nCurrent Balance: Rs" << account.getBalance() << endl;

    return 0;
}
