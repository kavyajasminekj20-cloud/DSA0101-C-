#include <iostream>
#include <string>
using namespace std;

class movieMagic
{
    int year;
    string title;
    float rating;

public:
    void accept()
    {
        cout << "Enter year: ";
        cin >> year;
        cin.ignore();

        cout << "Enter title: ";
        getline(cin, title);

        cout << "Enter rating: ";
        cin >> rating;
    }

    void display()
    {
        cout << "\nTitle: " << title << endl;

        if (rating >= 0.0 && rating <= 2.0)
            cout << "Flop";
        else if (rating <= 3.4)
            cout << "Semi-hit";
        else if (rating <= 4.5)
            cout << "Hit";
        else if (rating <= 5.0)
            cout << "Super Hit";
        else
            cout << "Invalid Rating";
    }
};

int main()
{
    movieMagic m;
    m.accept();
    m.display();

    return 0;
}
