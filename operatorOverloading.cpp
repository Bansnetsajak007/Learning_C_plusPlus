/*
    Operator Overloading is the concepts in OOP that allows you to define custom behaviors 
    for operators when they are used with user-defined data types, like classes or structures.

    This enables you to perform operations on your objects in a way that makes sense for your specific context.
*/

#include <iostream>

class Point {
public:
    int x, y;

    Point(int xVal, int yVal) : x(xVal), y(yVal) {}

    // Operator overloading for addition
    Point operator+(const Point& sajak) {
        return Point(x + sajak.x, y + sajak.y);
    }
};

int main() {
    Point p1(1, 2);
    Point p2(3, 4);

    Point p3 = p1 + p2;  // Using the overloaded + operator

    std::cout << "Resulting point: (" << p3.x << ", " << p3.y << ")" << std::endl;

    return 0;
}
