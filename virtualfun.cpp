#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};

class Rectangle : public Shape
{
    int l, b;

public:
    Rectangle(int x, int y)
    {
        l = x;
        b = y;
    }

    void area() override
    {
        int a = l * b;
        cout << "Area of Rectangle = " << a << endl;
    }
};

class Square : public Shape
{
    int s;

public:
    Square(int x)
    {
        s = x;
    }

    void area() override
    {
        int a = s * s;
        cout << "Area of Square = " << a << endl;
    }
};

int main()
{
    Shape *ptr;

    Rectangle r(10, 5);
    Square s(6);

    ptr = &r;
    ptr->area();

    ptr = &s;
    ptr->area();

    return 0;
}