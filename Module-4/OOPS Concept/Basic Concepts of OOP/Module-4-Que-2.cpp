// 2. Define a class to represent a bank account. Include the following members: 
// 3. Data Member: 

#include <iostream>
using namespace std;
class Bank
{
    char name[20], type[20];
    double AC, balance, depo, with;

public:
    Bank()
    {
        cout << "Enter Custmer Name : ";
        cin >> name;
        cout << "Account Number : ";
        cin >> AC;
        fflush(stdin);
        cout << "Type of Account : ";
        cin >> type;
        cout << "Balanace Amount in the Account : ";
        cin >> balance;
    }

    void deposite()
    {
        cout << "\nDeposited Amount : ";
        cin >> depo;

        balance = balance + depo;
        cout << "Total Balance After Deposited : " << balance;
    }

    void withdraw()
    {
        cout << "\nWithdrawal Amount : ";
        cin >> with;

        if (with >= balance)
        {
            cout << "\n Sorry..... Amount Exceeded Balanace.\n So you can't Withdraw Amount...\n Please Enter Valid Withdraw Amount.";
        }
        else
        {
            balance = balance - with;
            cout << "Total Balance After Withdrawal : " << balance;
        }
    }

    void inquiry()
    {
        cout << "\nAccount Holder Name : " << name;
        cout << "\nTotal Balance : " << balance;
    }
};

main()
{
    int a, deposite, withdraw;

    Bank obj;

    cout << "\nTo Assign Value : \n1. Deposited\n2. Withdraw\n3.Name & Balance\n";
    cin >> a;

    switch (a)
    {
    case 1:
        obj.deposite();
        break;

    case 2:
        obj.withdraw();
        break;

    case 3:
        obj.inquiry();
        break;

    default:
        cout << "\n You Enter Invalid Input.";
    }
};