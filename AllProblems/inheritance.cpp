#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;

public:
    Vehicle(string brand) : brand(brand) {}

    void start() {
        cout << "Starting the " << brand << " vehicle." << endl;
    }
};

// Derived class (Inheritance Type: Single Inheritance)
class Car : public Vehicle {
private:
    int numOfDoors;

public:
    Car(string brand, int numOfDoors) : Vehicle(brand), numOfDoors(numOfDoors) {}

    void drive() {
        cout << "Driving the " << brand << " car with " << numOfDoors << " doors." << endl;
    }
};

// Derived class (Inheritance Type: Multilevel Inheritance)
class ElectricCar : public Car {
public:
    ElectricCar(string brand, int numOfDoors) : Car(brand, numOfDoors) {}

    void charge() {
        cout << "Charging the " << brand << " electric car." << endl;
    }
};

int main() {
    ElectricCar tesla("Tesla", 4);
    tesla.start();
    tesla.drive();
    tesla.charge();

    return 0;
}
