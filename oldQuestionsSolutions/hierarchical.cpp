// PROGRAM IMPLEMENTING HIRERARCHICAL INHERITANCE 


#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& name) : name(name) {}

    void eat() {
        std::cout << name << " is eating." << std::endl;
    }
};

class Mammal : public Animal {
public:
    Mammal(const std::string& name) : Animal(name) {}

    void breathe() {
        std::cout << name << " is breathing with lungs." << std::endl;
    }
};

class Bird : public Animal {
public:
    Bird(const std::string& name) : Animal(name) {}

    void fly() {
        std::cout << name << " is flying." << std::endl;
    }
};

int main() {
    Mammal dog("Buddy");
    Bird eagle("Sky");

    dog.eat();   // Inherited from Animal
    dog.breathe();

    eagle.eat();  // Inherited from Animal
    eagle.fly();

    return 0;
}
