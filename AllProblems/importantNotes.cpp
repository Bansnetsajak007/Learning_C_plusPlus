

/*
    Both get() and getline() are helpful when you want to read input that might contain 
    spaces or when you want to read entire lines of text. Use get() when you want to specify a 
    character limit, and use getline() when you want to read until a newline character is encountered.
*/


// ------------------------------------------------------------------------------------------------------------------------------------------------------------------


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



// ------------------------------------------------------------------------------------------------------------------------------------------------------------------



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

let's See what are static data members and static member functions 

    static data members and static member functions are features that are associated 
    with the class itself rather than individual objects (instances) of the class. 
    They are shared among all instances of the class and provide some useful capabilities.

    Static Data Members:

        What They Are: Static data members are variables that belong to the class rather than to individual 
        objects created from the class. There is only one copy of a static data member that is shared by 
        all instances of the class.

        Declaration: You declare a static data member by using the static keyword before the data member's 
        declaration inside the class.

        Use Cases: Static data members are often used for data that is common to 
        all instances of a class. For example, you might use a static data member to 
        keep track of the total number of objects created from the class.

        Access: You can access static data members using the class name itself, 
        followed by the scope resolution operator ::.


        Static Member Functions:
           --> It can only access static members of the class (only static functions/members)


            What They Are: Static member functions are functions that are associated with the class itself, 
            not with any specific instance of the class. They do not have access to non-static (instance) members 
            of the class, but they can access other static members (both data members and functions).

            Declaration: You declare a static member function by using the static keyword before the function's 
            return type in the class declaration.

            Use Cases: Static member functions are often used for utility functions that do not need access to other
            instance-specific data but are related to the class in some way. For example, you might use a static member 
            function to calculate some value based on the class's static data members.

            Access: You can call static member functions using the class name, 
            followed by the scope resolution operator ::.



            class Smallest {
public:
    void min(int a , int b) {
        if (a < b) {
            std::cout << "Smallest: " << a << std::endl;
        } else {
            std::cout << "Smallest: " << b << std::endl;
        }
    }

    void min(float a , float b) {
        if (a < b) {
            std::cout << "Smallest: " << a << std::endl;
        } else {
            std::cout << "Smallest: " << b << std::endl;
        }
    }

    void min(double a , double b) {
        if (a < b) {
            std::cout << "Smallest: " << a << std::endl;
        } else {
            std::cout << "Smallest: " << b << std::endl;
        }
    }
};

int main() {
    Smallest s1;

    s1.min(12, 10);
    s1.min(12.5f, 14.78f);
    s1.min(4.64378, 1.90);

    return 0;
}
### Analysis:

#### First Approach:
- **Pros:**
  - Uses a template function `smallest` to handle the logic for finding the smallest of two numbers, avoiding code repetition.
  - Promotes code reuse and reduces redundancy.
- **Cons:**
  - The helper template function may introduce additional complexity for a simple task.

#### Second Approach:
- **Pros:**
  - Simplicity: Each member function directly implements the logic for finding the smallest, without relying on a helper template function.
- **Cons:**
  - Code Repetition: The logic for finding the smallest is repeated for each data type, leading to redundant code.

### Recommendation:

The first approach with the template function and helper function is generally considered better in terms of promoting code reuse, reducing redundancy, and maintaining a cleaner codebase. It encapsulates the common logic in a single place (the template function), making the code more modular and easier to maintain. The second approach, while simpler, may lead to duplicated logic and increased maintenance effort if the logic needs to be updated.

In summary, the first approach is preferred for its better adherence to the principles of modularity and code reuse.


*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------





