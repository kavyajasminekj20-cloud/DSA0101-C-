#include <iostream>
#include <string>
using namespace std;

class books
{
    string author;
    string title;
    double price;
    string publisher;
    int stock;

    static int successful;
    static int unsuccessful;

    void updatePrice()
    {
        char ch;
        cout << "Update price? (y/n): ";
        cin >> ch;

        if (ch == 'y' || ch == 'Y')
        {
            cout << "Enter new price: ";
            cin >> price;
        }
    }

public:
    books(string a, string t, double p, string pub, int s)
    {
        author = a;
        title = t;
        price = p;
        publisher = pub;
        stock = s;
    }

    void searchBook(string t, string a)
    {
        if (title == t && author == a)
        {
            cout << "\nBook Available\n";
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Publisher: " << publisher << endl;
            cout << "Price: Rs." << price << endl;
            cout << "Stock: " << stock << endl;

            updatePrice();

            int copies;
            cout << "Enter number of copies required: ";
            cin >> copies;

            if (copies <= stock)
            {
                cout << "Total Cost: Rs." << copies * price << endl;
                stock -= copies;
                successful++;
            }
            else
            {
                cout << "Required copies not in stock" << endl;
                unsuccessful++;
            }
        }
        else
        {
            cout << "Book not available." << endl;
            unsuccessful++;
        }
    }

    static void statistics()
    {
        cout << "\nSuccessful Transactions: " << successful << endl;
        cout << "Unsuccessful Transactions: " << unsuccessful << endl;
    }
};

int books::successful = 0;
int books::unsuccessful = 0;

int main()
{
    books b("James", "CPlusPlus", 500, "ABC", 10);

    string title, author;

    cout << "Enter title: ";
    getline(cin, title);

    cout << "Enter author: ";
    getline(cin, author);

    b.searchBook(title, author);

    books::statistics();

    return 0;
}
