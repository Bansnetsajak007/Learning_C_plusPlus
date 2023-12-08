#include <iostream>

class Shape {
public:
    // Pure virtual function(No implementation)
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    // Provide an implementation for the pure virtual function
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    // Provide an implementation for the pure virtual function
    void draw() override {
        std::cout << "Drawing a square." << std::endl;
    }
};

int main() {
    // Shape shape; // Error: Cannot instantiate an abstract class

    Circle circle;
    Square square;

    // Call the draw() function through derived class objects
    circle.draw(); // Draws a circle
    square.draw(); // Draws a square

    return 0;
}
