#include <iostream>
using namespace std;

class Fraction
{
    int a, b;

public:
    void input()
    {
        cout << "Enter numerator: ";
        cin >> a;

        cout << "Enter denominator: ";
        cin >> b;
    }

    void add(Fraction f)
    {
        cout << "Addition = "
             << (a * f.b) << " + "
             << (b * f.a) << " / "
             << (b * f.b);
    }
};

int main()
{
    Fraction f1, f2;

    cout << "Enter first fraction:\n";
    f1.input();

    cout << "\nEnter second fraction:\n";
    f2.input();

    cout << "\n";
    f1.add(f2);

    return 0;
}