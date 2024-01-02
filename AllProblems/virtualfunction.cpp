/*
virtual function is a function in a base class that is marked with the virtual keyword. The main purpose of virtual functions is to enable polymorphism, allowing derived classes to provide their own implementation of the function.

*/

//this is the problem solved by virtual function


#include <iostream>

class Base {
public:
    // Declare a virtual function
     void display() {
        std::cout << "Base class display() called." << std::endl;
    }
};

class Derived : public Base {
public:
    // Override the virtual function in the derived class
    void display()  {
        std::cout << "Derived class display() called." << std::endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    // Call the virtual function through base class pointers
    Base* ptr = &baseObj;
    ptr->display(); // Calls Base::display()

    ptr = &derivedObj;
    ptr->display(); // Calls Derived::display()

    return 0;
}
