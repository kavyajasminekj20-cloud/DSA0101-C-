#include <iostream>
#include <string>
using namespace std;

class Item
{
protected:
    int item_no;
    string name;
    double price;

public:
    void accept()
    {
        cout << "Enter item number: ";
        cin >> item_no;
        cin.ignore();

        cout << "Enter item name: ";
        getline(cin, name);

        cout << "Enter price: ";
        cin >> price;
    }
};

class DiscountedItem : public Item
{
    double discount_percent;
    double finalPrice;

public:
    void calculate()
    {
        cout << "Enter discount percentage: ";
        cin >> discount_percent;

        finalPrice = price - (price * discount_percent / 100);
    }

    void display()
    {
        cout << "\nItem No: " << item_no;
        cout << "\nName: " << name;
        cout << "\nPrice: Rs." << price;
        cout << "\nDiscount: " << discount_percent << "%";
        cout << "\nFinal Price: Rs." << finalPrice << endl;
    }

    double getFinalPrice()
    {
        return finalPrice;
    }
};

int main()
{
    int n;
    double total = 0;

    cout << "Enter number of items: ";
    cin >> n;

    DiscountedItem items[20];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of item " << i + 1 << endl;

        items[i].accept();
        items[i].calculate();
        total += items[i].getFinalPrice();
    }

    cout << "\n========== ITEM-WISE BILL ==========\n";

    for (int i = 0; i < n; i++)
        items[i].display();

    cout << "\nTotal Amount: Rs." << total << endl;

    return 0;
}
