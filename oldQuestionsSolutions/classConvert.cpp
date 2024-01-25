//wap in C++ to convert one class to another class type by writing conversion routine in source class
// simple program to convert object of one class to another


#include <iostream>


class SourceClass;

class DestinationClass {
public:
    int value;

    // Conversion routine from SourceClass to DestinationClass
    explicit DestinationClass(const SourceClass& source);

    void display() const {
        std::cout << "Value in DestinationClass: " << value << std::endl;
    }
};

class SourceClass {
private:
    int data;

public:
    SourceClass(int initData) : data(initData) {}

    int getData() const {
        return data;
    }

    // Conversion routine from SourceClass to DestinationClass
    operator DestinationClass() const {
        return DestinationClass(*this);
    }
};

// Definition of the conversion routine
DestinationClass::DestinationClass(const SourceClass& source) {
    value = source.getData();
}

int main() {
    // Create an object of SourceClass
    SourceClass sourceObject(42);

    // Convert SourceClass object to DestinationClass using the conversion routine
    DestinationClass destinationObject = sourceObject;

    // Display the value in the DestinationClass object
    destinationObject.display();

    return 0;
}


// #include <iostream>

// class SourceClass {
// private:
//     int data;

// public:
//     // Constructor
//     SourceClass(int value) : data(value) {}

//     // Conversion routine to convert to TargetClass
//     operator int() const {
//         return data;
//     }
// };

// class TargetClass {
// private:
//     int convertedData;

// public:
//     // Constructor
//     TargetClass(int value) : convertedData(value) {}

//     // Display the data in TargetClass
//     void display() const {
//         std::cout << "Data in TargetClass: " << convertedData << std::endl;
//     }
// };

// int main() {
//     // Create an object of SourceClass
//     SourceClass sourceObj(42);

//     // Convert SourceClass object to TargetClass using the conversion routine
//     TargetClass targetObj = static_cast<int>(sourceObj);

//     // Display the converted data in TargetClass
//     targetObj.display();

//     return 0;
// }


