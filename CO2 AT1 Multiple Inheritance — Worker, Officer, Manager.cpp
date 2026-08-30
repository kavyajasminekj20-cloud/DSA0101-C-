#include <iostream>
#include <string>
using namespace std;

class Worker
{
protected:
    int code;
    string name;
    float salary;

public:
    void acceptWorker()
    {
        cout << "Enter worker code: ";
        cin >> code;
        cin.ignore();

        cout << "Enter worker name: ";
        getline(cin, name);

        cout << "Enter salary: ";
        cin >> salary;
    }
};

class Officer
{
protected:
    float DA, HRA;

public:
    void acceptOfficer()
    {
        cout << "Enter DA: ";
        cin >> DA;

        cout << "Enter HRA: ";
        cin >> HRA;
    }
};

class Manager : public Worker, public Officer
{
    float TA;
    float grossSalary;

public:
    void calculate()
    {
        TA = salary * 0.10;
        grossSalary = salary + DA + HRA + TA;
    }

    void display()
    {
        cout << "\nWorker Code: " << code;
        cout << "\nWorker Name: " << name;
        cout << "\nSalary: " << salary;
        cout << "\nDA: " << DA;
        cout << "\nHRA: " << HRA;
        cout << "\nTA: " << TA;
        cout << "\nGross Salary: " << grossSalary << endl;
    }
};

int main()
{
    Manager m;

    m.acceptWorker();
    m.acceptOfficer();
    m.calculate();
    m.display();

    return 0;
}
