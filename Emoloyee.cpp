#include <iostream>
#include <string>

class Employee {
private:
    int employeeID;
    std::string name;
    double salary;

public:
 
    Employee() {
        employeeID = 0;
        name = "Unknown";
        salary = 0.0;
        std::cout << "Default constructor called." << std::endl;
    }

   
    Employee(int id, std::string empName, double empSalary) {
        employeeID = id;
        name = empName;
        salary = empSalary;
        std::cout << "Parameterized constructor called." << std::endl;
    }

  
    Employee(const Employee &obj) {
        employeeID = obj.employeeID;
        name = obj.name;
        salary = obj.salary;
        std::cout << "Copy constructor called." << std::endl;
    }

 
    void display() const {
        std::cout << "ID: " << employeeID 
                  << " | Name: " << name 
                  << " | Salary: $" << salary << "\n" << std::endl;
    }
};

int main() {
    Employee emp1;
    emp1.display();

    Employee emp2(101, "Alice Smith", 75000.50);
    emp2.display();

    Employee emp3(emp2);
    emp3.display();

    return 0;
}
