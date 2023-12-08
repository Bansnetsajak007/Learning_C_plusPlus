/*
    Operator Overloading is the concepts in OOP that allows you to define custom behaviors 
    for operators when they are used with user-defined data types, like classes or structures.

    This enables you to perform operations on your objects in a way that makes sense for your specific context.
*/

#include <iostream>

using namespace std;

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

    Point p3 = p1 + p2;  // Using the overloaded + operator adds two custom user defined objects
    int sum = 10 + 10;   // Here adds two integers values

    cout << "Resulting point: (" << p3.x << ", " << p3.y << ")" << endl;
    cout << "The sum of integers is " << sum;

    return 0;
}
