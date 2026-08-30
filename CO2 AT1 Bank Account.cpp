#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    string name;
    int accountNo;
    string type;
    double balance;

public:
    BankAccount(string n, int a, string t, double b)
    {
        name = n;
        accountNo = a;
        type = t;
        balance = b;
    }

    void deposit()
    {
        int acc;
        string n;
        double amount;

        cout << "Enter account number: ";
        cin >> acc;
        cin.ignore();

        cout << "Enter name: ";
        getline(cin, n);

        if (acc == accountNo && n == name)
        {
            cout << "Enter deposit amount: ";
            cin >> amount;
            balance += amount;
            cout << "Amount deposited successfully.\n";
        }
        else
            cout << "Invalid account details.\n";
    }

    void withdraw()
    {
        double amount;

        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
            cout << "Insufficient balance.\n";
    }

    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Balance: Rs." << balance << endl;
    }

    ~BankAccount()
    {
        cout << "Account object destroyed." << endl;
    }
};

int main()
{
    BankAccount b("Kavya", 101, "Savings", 5000);

    b.display();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}
