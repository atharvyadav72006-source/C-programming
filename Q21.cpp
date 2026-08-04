#include <iostream>
using namespace std;

class Circle
{
    float radius;

public:
    void accept()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void calculate()
    {
        cout << "Area = " << 3.14 * radius * radius << endl;
        cout << "Circumference = " << 2 * 3.14 * radius << endl;
    }
};

int main()
{
    Circle c;

    c.accept();
    c.calculate();

    return 0;
}