#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
    int hours, minutes, seconds;

public:
    void accept()
    {
        cout << "Enter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter seconds: ";
        cin >> seconds;
    }

    Time add(Time t)
    {
        Time result;

        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours;

        // Convert seconds to minutes
        if (result.seconds >= 60)
        {
            result.seconds -= 60;
            result.minutes++;
        }

        // Convert minutes to hours
        if (result.minutes >= 60)
        {
            result.minutes -= 60;
            result.hours++;
        }

        return result;
    }

    void display()
    {
        cout << setfill('0') << setw(2) << hours << ":"
             << setw(2) << minutes << ":"
             << setw(2) << seconds << endl;
    }
};

int main()
{
    Time t1, t2, result;

    cout << "Enter first time:\n";
    t1.accept();

    cout << "\nEnter second time:\n";
    t2.accept();

    result = t1.add(t2);

    cout << "\nResultant Time: ";
    result.display();

    return 0;
}