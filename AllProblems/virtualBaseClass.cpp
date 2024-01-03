/*
A virtual base class in C++ is a base class that is declared as virtual in a derived class to ensure a single shared instance of the base class in the hierarchy, addressing the "diamond problem" in multiple inheritance.

so in this program Animal is virtual base class
*/

#include <iostream>

// Virtual base class
class Animal {
public:
    virtual void makeSound() const {
        std::cout << "Animal sound" << std::endl;
    }
};

// Base class 1
class Mammal : public virtual Animal {
};

// Base class 2
class Bird : public virtual Animal {
};

// Derived class inheriting from both Mammal and Bird
class Platypus : public Mammal, public Bird {
};

int main() {
    Platypus p;

    // Calls the overridden function in Animal
    p.makeSound();

    return 0;
}
