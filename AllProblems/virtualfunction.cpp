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
