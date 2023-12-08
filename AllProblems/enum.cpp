/*
    In C++, an enumeration (enum) is a user-defined data type used to define a set of named constants.
    In simple terms we can say that enum is user-defined datatype
*/

#include <iostream>

enum Size {
    SMALL, MEDIUM, LARGE, XLARGE
};

int main() {
    Size shirtSize = XLARGE;

    switch (shirtSize) {
        case SMALL:
            std::cout << "You selected a small size." << std::endl;
            break;
        case MEDIUM:
            std::cout << "You selected a medium size." << std::endl;
            break;
        case LARGE:
            std::cout << "You selected a large size." << std::endl;
            break;
        case XLARGE:
            std::cout << "You selected an extra large size." << std::endl;
            break;
    }

    return 0;
}
