#include <iostream>
using namespace std;

class SavingsAccount
{
    class Account
    {
    public:
        string name;
        int accNo;
        float balance;
        float rate;
    };

    Account a;

public:
    SavingsAccount(string n, int no, float b, float r)
    {
        a.name = n;
        a.accNo = no;
        a.balance = b;
        a.rate = r;
    }

    void deposit(float amount)
    {
        a.balance += amount;
    }

    void withdraw(float amount)
    {
        a.balance -= amount;
    }

    void applyInterest()
    {
        a.balance += a.balance * a.rate / 100;
    }

    void display()
    {
        cout << "\nName: " << a.name;
        cout << "\nAccount No: " << a.accNo;
        cout << "\nBalance: " << a.balance;
        cout << "\nInterest Rate: " << a.rate << "%";
    }
};

int main()
{
    string name;
    int no;
    float balance, rate, amount;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Account No: ";
    cin >> no;

    cout << "Enter Balance: ";
    cin >> balance;

    cout << "Enter Interest Rate: ";
    cin >> rate;

        SavingsAccount s(name, no, balance, rate);

    cout << "\nEnter Deposit Amount: ";
    cin >> amount;
    s.deposit(amount);

    cout << "Enter Withdraw Amount: ";
    cin >> amount;
    s.withdraw(amount);

    s.applyInterest();

    s.display();

    return 0;
}