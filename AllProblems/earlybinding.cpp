#include <iostream>

class Base {
public:
    void display() {
        std::cout << "Base class display() called." << std::endl;
    }
};

class Derived : public Base {
public:
    void display() {
        std::cout << "Derived class display() called." << std::endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    // Early binding - resolved at compile-time
    baseObj.display();   // Calls Base::display()
    derivedObj.display(); // Calls Derived::display()

    return 0;
}
