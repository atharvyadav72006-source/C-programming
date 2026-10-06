#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculateSalary()
    {
        cout << "Employee Salary" << endl;
    }
};

class Manager : public Employee
{
public:
    void calculateSalary()
    {
        int salary = 50000;
        cout << "Manager Salary: " << salary << endl;
    }
};

class Developer : public Employee
{
public:
    void calculateSalary()
    {
        int salary = 40000;
        cout << "Developer Salary: " << salary << endl;
    }
};

int main()
{
    Employee *e;

    Manager m;
    Developer d;

    e = &m;
    e->calculateSalary();

    e = &d;
    e->calculateSalary();

    return 0;
}