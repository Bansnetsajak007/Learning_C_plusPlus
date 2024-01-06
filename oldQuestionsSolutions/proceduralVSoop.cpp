/*
-------------------------------------------------------PROCEDURAL------------------------------------------------------

    comparing OOP with Procedural pattern  of programming

    Procedural programming and object-oriented programming (OOP) represent distinct paradigms in software development, each with its own set of principles and design philosophies. In procedural programming, the emphasis is on procedures or routines that manipulate data, typically organized in a linear fashion. The primary focus is on functions and the flow of control, often relying on global data structures. Procedural languages, like C, use functions to execute tasks, and data is often shared openly among different parts of the program. While procedural programming can be straightforward and efficient for smaller programs, it may face challenges in managing complexity and maintaining code as the project scales.

    #include <iostream>
#include <string>

// Employee structure for procedural approach
struct Employee {
    int id;
    std::string name;
    std::string address;
    std::string position;
    std::string department;
    double salary;
};

void displayEmployeeInfo(const Employee& emp) {
    std::cout << "Employee ID: " << emp.id << "\n";
    std::cout << "Name: " << emp.name << "\n";
    std::cout << "Address: " << emp.address << "\n";
    std::cout << "Position: " << emp.position << "\n";
    std::cout << "Department: " << emp.department << "\n";
    std::cout << "Salary: $" << emp.salary << "\n";
}

int main() {
    // Creating an employee using procedural approach
    Employee employee;
    employee.id = 1;
    employee.name = "John Doe";
    employee.address = "123 Main St";
    employee.position = "Software Engineer";
    employee.department = "Engineering";
    employee.salary = 75000.00;

    // Displaying employee information
    displayEmployeeInfo(employee);

    return 0;
}


-------------------------------------------------------OOP-------------------------------------------------------------

    On the other hand, object-oriented programming is centered around the concept of classes  objects, classes encapsulate both data and the operations that can be performed on that data. Objects are instances of classes, which act as blueprints defining the structure and behavior of the objects. OOP promotes modularity, encapsulation, and abstraction, facilitating the design of more reusable and extensible code. Encapsulation allows for the bundling of data and methods within objects, providing a clear interface for interaction. This approach enhances code organization, promotes code reuse through inheritance and polymorphism, and supports the modeling of real-world entities and relationships, fostering a more intuitive and scalable development process. OOP is particularly advantageous in large-scale projects where code maintenance, collaboration, and adaptability are crucial considerations.

    #include <iostream>
#include <string>

// Employee class for object-oriented approach
class Employee {
public:
    // Data members
    int id;
    std::string name;
    std::string address;
    std::string position;
    std::string department;
    double salary;

    // Member function to display employee information
    void displayInfo() const {
        std::cout << "Employee ID: " << id << "\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Address: " << address << "\n";
        std::cout << "Position: " << position << "\n";
        std::cout << "Department: " << department << "\n";
        std::cout << "Salary: $" << salary << "\n";
    }
};

int main() {
    // Creating an employee using object-oriented approach
    Employee employee;
    employee.id = 1;
    employee.name = "John Doe";
    employee.address = "123 Main St";
    employee.position = "Software Engineer";
    employee.department = "Engineering";
    employee.salary = 75000.00;

    // Displaying employee information using member function
    employee.displayInfo();

    return 0;
}




*/