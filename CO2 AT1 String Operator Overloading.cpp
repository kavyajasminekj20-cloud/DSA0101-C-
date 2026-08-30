#include <iostream>
#include <string>
using namespace std;

class String
{
    string str;

public:
    String(string s)
    {
        str = s;
    }

    bool operator==(String s)
    {
        return str == s.str;
    }

    bool operator>(String s)
    {
        return str > s.str;
    }

    bool operator<(String s)
    {
        return str < s.str;
    }
};

int main()
{
    string a, b;

    cout << "Enter first string: ";
    getline(cin, a);

    cout << "Enter second string: ";
    getline(cin, b);

    String s1(a);
    String s2(b);

    if (s1 == s2)
        cout << "Both strings are equal." << endl;
    else if (s1 > s2)
        cout << "First string is greater." << endl;
    else if (s1 < s2)
        cout << "First string is smaller." << endl;

    return 0;
}
