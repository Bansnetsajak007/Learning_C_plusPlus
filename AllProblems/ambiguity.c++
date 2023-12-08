#include <iostream>

// First base class
class Base1 {
public:
    virtual void display() {
        std::cout << "Base1 Display\n";
    }
};

// Second base class
class Base2 {
public:
    void display() {
        std::cout << "Base2 Display\n";
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    // Override the display function to resolve ambiguity
    void display() override {
        Base1::display(); // You can choose to call Base1's version
    }
    // Assume some methods and attributes
};

int main() {
    Derived obj;

    obj.display();  // Calls the overridden display function in Derived

    return 0;
}
