/*
    In C++, a "friend class" is a class that is granted access to the private and protected members of another class. 
    This is typically done using the friend keyword in the class declaration. 
*/

#include <iostream>

class MyClass {
private:
    int privateVar = 42;

public:
    // Declare FriendClass as a friend class
    friend class FriendClass;

    void PrintPrivateVar() {
        std::cout << "MyClass privateVar: " << privateVar << std::endl;
    }
};

class FriendClass {
public:
    void AccessPrivateVar(MyClass& myObject) {
        // FriendClass can access the privateVar of MyClass
        std::cout << "FriendClass accessing privateVar: " << myObject.privateVar << std::endl;
    }
};

int main() {
    MyClass myObject;
    FriendClass friendObject;

    myObject.PrintPrivateVar();          // Accessing from MyClass
    friendObject.AccessPrivateVar(myObject); // Accessing from FriendClass

    return 0;
}
