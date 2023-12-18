/*
In C++, a namespace is a way to group related functions,
classes, and variables under a single name. The purpose of
namespaces is to avoid naming conflicts between different
parts of a large program or between different libraries.

*/

#include <iostream>

// Define a namespace called 'Math' for math-related functions and variables
namespace Math {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
}

// Define another namespace called 'Utility' for utility functions
namespace Utility {
    void printMessage() {
        std::cout << "Hello from the Utility namespace!\n";
    }
}

int main() {
    // Using functions from the 'Math' namespace
    std::cout << "Addition: " << Math::add(5, 3) << std::endl;
    std::cout << "Subtraction: " << Math::subtract(8, 3) << std::endl;

    // Using a function from the 'Utility' namespace
    Utility::printMessage();

    return 0;
}
