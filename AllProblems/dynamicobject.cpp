/*
    Dynamic objects basically are the objets that get created during runtime.
*/

#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    int userInput = 42; // You can get this value from user input

    MyClass* objPtr = new MyClass(userInput); // Dynamic initialization on the heap
    objPtr->display();

    delete objPtr; // Don't forget to release memory when done
    return 0;
}
