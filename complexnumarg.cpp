#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real >> imag;
    }

    void addComplex(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl; 
    }
};

int main() {
    Complex num1, num2;
    Complex result;

    cout << "For First Complex Number:" << endl;
    num1.input();

    cout << "\nFor Second Complex Number:" << endl;
    num2.input();
    result.addComplex(num1, num2);
    cout << "\nFirst Complex Number: ";
    num1.display();

    cout << "Second Complex Number: ";
    num2.display();

    cout << "-----------------------" << endl;
    cout << "Sum of Complex Numbers: ";
    result.display();

    return 0;
}
