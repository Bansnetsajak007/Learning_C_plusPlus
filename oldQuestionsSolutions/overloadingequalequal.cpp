// program to overload '==' operator

#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    // Friend function for overloading the '==' operator
    friend bool operator==(const MyClass& obj1, const MyClass& obj2);

};

// Definition of friend function
bool operator==(const MyClass& obj1, const MyClass& obj2) {
    return obj1.value == obj2.value;
}

int main() {
    MyClass obj1(10);
    MyClass obj2(20);
    MyClass obj3(10);

    if (obj1 == obj2) {
        std::cout << "obj1 is equal to obj2" << std::endl;  
    } else {
        std::cout << "obj1 is not equal to obj2" << std::endl;
    }

    if (obj1 == obj3) {
        std::cout << "obj1 is equal to obj3" << std::endl;
    } else {
        std::cout << "obj1 is not equal to obj3" << std::endl;
    }

    return 0;
}
