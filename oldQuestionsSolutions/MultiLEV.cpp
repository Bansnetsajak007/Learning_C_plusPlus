#include <iostream>
#include <string>

using namespace std;

// Base class Employee
class Employee {
public:
    int id;
    string name;

    Employee(int empId, const string& empName) : id(empId), name(empName) {}

    void displayEmployee() const {
        cout << "Employee ID: " << id << "\n";
        cout << "Employee Name: " << name << "\n";
    }
};

// Derived class EmployeeInfo from Employee
class EmployeeInfo : public Employee {
public:
    string address;
    string position;

    EmployeeInfo(int empId, const string& empName, const string& empAddress, const string& empPosition)
        : Employee(empId, empName), address(empAddress), position(empPosition) {}

    void displayEmployeeInfo() const {
        displayEmployee();
        cout << "Employee Address: " << address << "\n";
        cout << "Employee Position: " << position << "\n";
    }
};

// Derived class EmployeeRecord from EmployeeInfo
class EmployeeRecord : public EmployeeInfo {
public:
    string department;
    double salary;

    EmployeeRecord(int empId, const string& empName, const string& empAddress, const string& empPosition,
                   const string& empDepartment, double empSalary)
        : EmployeeInfo(empId, empName, empAddress, empPosition), department(empDepartment), salary(empSalary) {}

    void displayEmployeeRecord() const {
        displayEmployeeInfo();
        cout << "Employee Department: " << department << "\n";
        cout << "Employee Salary: $" << salary << "\n";
    }
};

int main() {
    // Creating an object of the EmployeeRecord class
    EmployeeRecord employee(101, "John Doe", "123 Main St", "Software Engineer", "IT", 75000.00);

    // Displaying employee record information
    cout << "Employee Record Information:\n";
    employee.displayEmployeeRecord();

    return 0;
}
