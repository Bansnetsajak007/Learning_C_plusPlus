#include <iostream>

// Common base class with a virtual function
class BaseCommon {
public:
    virtual void display() {
        std::cout << "BaseCommon Display\n";
    }
};

class Base1 : public virtual BaseCommon {
public:
    void display() override {
        std::cout <<"Base1 display";
    }
};

class Base2 : public virtual BaseCommon {
public:
    void display() override {
        std::cout <<"Base2 display";
    }
};

class Derived : public virtual Base1, public virtual Base2 {
public:
    
};

int main() {
    Derived obj;

    obj.Base1::display();  // No ambiguity with virtual inheritance

    return 0;
}
