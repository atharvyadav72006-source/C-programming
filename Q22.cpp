#include <iostream>
using namespace std;

class Greatest
{
    int a, b;

public:
    void accept()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void findGreatest()
    {
        if (a > b)
            cout << "Greatest = " << a;
        else
            cout << "Greatest = " << b;
    }
};

int main()
{
    Greatest g;

    g.accept();
    g.findGreatest();

    return 0;
}