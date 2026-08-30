#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    string address;
    string phone_no;
};

class Employee : public Person
{
    int eno;
    string ename;

public:
    void accept()
    {
        cout << "Enter employee number: ";
        cin >> eno;
        cin.ignore();

        cout << "Enter employee name: ";
        getline(cin, ename);

        cout << "Enter address: ";
        getline(cin, address);

        cout << "Enter phone number: ";
        getline(cin, phone_no);
    }

    void display()
    {
        cout << "\nEmployee Number: " << eno;
        cout << "\nEmployee Name: " << ename;
        cout << "\nAddress: " << address;
        cout << "\nPhone: " << phone_no << endl;
    }
};

class Manager : public Person
{
    string designation;
    string department_name;
    double basic_salary;

public:
    void accept()
    {
        cin.ignore();

        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter address: ";
        getline(cin, address);

        cout << "Enter phone number: ";
        getline(cin, phone_no);

        cout << "Enter designation: ";
        getline(cin, designation);

        cout << "Enter department: ";
        getline(cin, department_name);

        cout << "Enter basic salary: ";
        cin >> basic_salary;
    }

    void display()
    {
        cout << "\nManager Name: " << name;
        cout << "\nAddress: " << address;
        cout << "\nPhone: " << phone_no;
        cout << "\nDesignation: " << designation;
        cout << "\nDepartment: " << department_name;
        cout << "\nBasic Salary: Rs." << basic_salary << endl;
    }

    double getSalary()
    {
        return basic_salary;
    }
};

int main()
{
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee e[10];

    for (int i = 0; i < n; i++)
        e[i].accept();

    cout << "\n--- EMPLOYEE DETAILS ---\n";

    for (int i = 0; i < n; i++)
        e[i].display();

    cout << "\nEnter number of managers: ";
    cin >> n;

    Manager m[10];

    for (int i = 0; i < n; i++)
        m[i].accept();

    cout << "\n--- MANAGER DETAILS ---\n";

    for (int i = 0; i < n; i++)
        m[i].display();

    int choice;

    do
    {
        cout << "\n1. Display Employees";
        cout << "\n2. Display Managers";
        cout << "\n3. Highest Salary Manager";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            for (int i = 0; i < n; i++)
                e[i].display();
            break;

        case 2:
            for (int i = 0; i < n; i++)
                m[i].display();
            break;

        case 3:
        {
            int pos = 0;

            for (int i = 1; i < n; i++)
            {
                if (m[i].getSalary() > m[pos].getSalary())
                    pos = i;
            }

            cout << "\nManager with highest salary:\n";
            m[pos].display();
            break;
        }

        case 4:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice.";
        }

    } while (choice != 4);

    return 0;
}
