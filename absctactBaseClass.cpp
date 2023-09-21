/*
    abstract base classes are those which cannot be instanciated and baically server as blueprints for other classes 
    to inherit from and are used to achieve abstraction in oops
*/

#include <iostream>



// Abstract base class
class Shape {
public:
    // Pure virtual function, must be implemented by derived classes
    virtual double area() const = 0;

    // Common function shared by all derived classes
    void printArea() const {
        std::cout << "Area: " << area() << std::endl;
    }
};


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementation of the pure virtual function
    double area() const override {
        return 3.141592653589793 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}


    double area() const override {
        return width * height;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    circle.printArea();    // Calls area() of Circle
    rectangle.printArea(); // Calls area() of Rectangle

    return 0;
}
