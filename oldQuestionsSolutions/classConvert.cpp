//wap in C++ to convert one class to another class type by writing conversion routine in source class

#include <iostream>

// Forward declaration of SourceClass
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

