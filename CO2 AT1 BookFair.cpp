#include <iostream>
#include <string>
using namespace std;

class BookFair
{
    string Bname;
    double price;

public:
    void Input()
    {
        cout << "Enter book name: ";
        getline(cin, Bname);

        cout << "Enter price: ";
        cin >> price;
    }

    void calculate()
    {
        if (price <= 1000)
            price = price - (price * 0.02);
        else if (price <= 3000)
            price = price - (price * 0.10);
        else
            price = price - (price * 0.15);
    }

    void display()
    {
        cout << "\nBook Name: " << Bname << endl;
        cout << "Price after discount: Rs." << price << endl;
    }
};

int main()
{
    BookFair b;
    b.Input();
    b.calculate();
    b.display();

    return 0;
}
