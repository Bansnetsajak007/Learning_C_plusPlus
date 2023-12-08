/*
Define a Shape class (with necessary constructors and member functions) 
in Object-Oriented Programming (abstract necessary attributes and their
types). (Write a complete code in C++ programming language) 
Derive Triangle and Rectangle classes from Shape class adding necessary attributes. 
Use these classes in a main function and display the area of triangle and rectangle

*/

#include <iostream>

using namespace std;

class Shape {
protected:
    double length;
    double breadth;

public:
    Shape(double len, double bre) : length(len), breadth(bre) {}

    virtual void calculate_and_display() {
        // No need to gather input; members already initialized
    }
};

class Triangle : public Shape {
public:
    Triangle(double len, double bre) : Shape(len, bre) {}

    void calculate_and_display() override {
        cout << "Area of triangle: " << 0.5 * (length * breadth);
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double len, double bre) : Shape(len, bre) {}

    void calculate_and_display() override {
        cout << "Area of rectangle: " << (length * breadth);
    }
};

int main() {
    double len, bre;

    cout << "Enter length and breadth for triangle: ";
    cin >> len >> bre;
    Triangle triangle1(len, bre);

    cout << "Enter length and breadth for rectangle: ";
    cin >> len >> bre;
    Rectangle rectangle1(len, bre);

    triangle1.calculate_and_display();
    cout << endl;
    rectangle1.calculate_and_display();

    return 0;
}
