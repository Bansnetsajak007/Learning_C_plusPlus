#include <iostream>

class Base {
public:
    virtual void display() {
        std::cout << "Base class display() called." << std::endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        std::cout << "Derived class display() called." << std::endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    // Late binding - resolved at runtime
    Base* ptr = &baseObj;
    ptr->display(); // Calls Base::display()

    ptr = &derivedObj;
    ptr->display(); // Calls Derived::display()

    return 0;
}


