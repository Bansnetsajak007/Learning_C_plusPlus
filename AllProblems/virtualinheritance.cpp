#include <iostream>

// Common base class with a virtual function(virtual base class)
class BaseCommon {
public:
    virtual void display() {
        std::cout << "BaseCommon Display\n";
    }
};


class Base1 : public virtual BaseCommon {
public:

};

class Base2 : public virtual BaseCommon {
public:

};


class Derived : public Base1, public Base2 {
public:
    
};

int main() {
    Derived obj;

    obj.display();  // No ambiguity with virtual inheritance

    return 0;
}
