// describe the concept of nesting of classes with simple example


/*

Nesting of classes in C++ involves defining one class within another, 
creating a hierarchy or containment structure. This allows for a modular and organized design, 
where the inner class is logically encapsulated within the outer class. The outer class acts as a container, 
providing a clean and readable way to represent relationships between classes, enhancing code structure and 
encapsulation.

*/

//code example

#include <iostream>

class OuterClass {
public:
    class InnerClass {
    public:
        void display() {
            std::cout << "Inside InnerClass" << std::endl;
        }
    };

    void outerDisplay() {
        std::cout << "Inside OuterClass" << std::endl;
    }
};

int main() {
    OuterClass outerObject;
    OuterClass::InnerClass innerObject;

    outerObject.outerDisplay();  // Accessing OuterClass member
    innerObject.display();       // Accessing InnerClass member

    return 0;
}
