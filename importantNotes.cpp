

/*
    Both get() and getline() are helpful when you want to read input that might contain 
    spaces or when you want to read entire lines of text. Use get() when you want to specify a 
    character limit, and use getline() when you want to read until a newline character is encountered.
*/


/*
Default Constructor:

A default constructor is a constructor that can be called without any arguments. 
If you don't define any constructors for a class, the compiler provides a default constructor automatically. 
The default constructor initializes the members of the class to default values (zero, null, etc., depending on the type). 
It's used when you create an object without explicitly providing constructor arguments.
#include <iostream>

class MyClass {
public:
    int value;

    // Default constructor
    MyClass() {
        value = 0;
    }
};

int main() {
    MyClass obj; // Calls the default constructor
    std::cout << "Default Value: " << obj.value << std::endl;

    return 0;
}

*/

/*
    Copy Constructor:
    A copy constructor is a special constructor that is used to create a new object as a copy of an existing object. 
    It takes a single argument, which is a reference to another object of the same class. 
    The copy constructor is invoked when you initialize an object using an existing object of the same class, 
    or when you pass objects by value as function arguments.

    #include <iostream>

class MyClass {
public:
    int value;

    // Constructor
    MyClass(int v) : value(v) {}

    // Copy constructor
    MyClass(const MyClass& other) : value(other.value) {}
};

int main() {
    MyClass obj1(5);
    MyClass obj2 = obj1; // Calls the copy constructor

    std::cout << "Object 1 value: " << obj1.value << std::endl;
    std::cout << "Object 2 value: " << obj2.value << std::endl;

    return 0;
}

Compile-Time Polymorphism (Static Polymorphism)

Compile-time polymorphism involves method or function overloading, 
where multiple methods or functions with the same name but different parameter lists are defined in a class. 
The appropriate method or function to be executed is determined at 
compile time based on the number, types, and order of arguments passed.

Run-Time Polymorphism (Dynamic Polymorphism):

Run-time polymorphism involves method overriding, where a subclass provides a specific implementation for a 
method that is already defined in its superclass. The method to be executed is determined at runtime based on the 
actual type of the object, allowing a subclass to provide its own version of a method while still joined to the method 
signature defined in the superclass.

*/
