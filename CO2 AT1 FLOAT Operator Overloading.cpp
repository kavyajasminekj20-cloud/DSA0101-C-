#include <iostream>
using namespace std;

class FLOAT
{
    float value;

public:
    FLOAT()
    {
        value = 0;
    }

    FLOAT(float v)
    {
        value = v;
    }

    FLOAT operator+(FLOAT f)
    {
        return FLOAT(value + f.value);
    }

    FLOAT operator-(FLOAT f)
    {
        return FLOAT(value - f.value);
    }

    FLOAT operator*(FLOAT f)
    {
        return FLOAT(value * f.value);
    }

    FLOAT operator/(FLOAT f)
    {
        return FLOAT(value / f.value);
    }

    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    FLOAT a(10.5), b(2.5);

    FLOAT c = a + b;
    cout << "Addition: ";
    c.display();

    c = a - b;
    cout << "Subtraction: ";
    c.display();

    c = a * b;
    cout << "Multiplication: ";
    c.display();

    c = a / b;
    cout << "Division: ";
    c.display();

    return 0;
}
