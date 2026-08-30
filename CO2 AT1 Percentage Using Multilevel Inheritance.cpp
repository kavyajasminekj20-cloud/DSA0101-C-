#include <iostream>
using namespace std;

class Marks
{
protected:
    int m1, m2, m3;

public:
    void accept()
    {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
};

class Total : public Marks
{
protected:
    int total;

public:
    void calculateTotal()
    {
        total = m1 + m2 + m3;
    }
};

class Percentage : public Total
{
public:
    void calculatePercentage()
    {
        float percentage = total / 3.0;

        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Percentage p;

    p.accept();
    p.calculateTotal();
    p.calculatePercentage();

    return 0;
}
