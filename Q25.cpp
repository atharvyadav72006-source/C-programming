#include <iostream>
using namespace std;

class Result
{
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

public:
    void accept()
    {
        cout << "Enter marks of 5 subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }

    void calculate()
    {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5.0;

        cout << "Total = " << total << endl;
        cout << "Percentage = " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Student Passed";
        else
            cout << "Student Failed";
    }
};

int main()
{
    Result r;

    r.accept();
    r.calculate();

    return 0;
}