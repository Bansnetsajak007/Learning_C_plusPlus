/*
    Write a C++ program that converts distances from meters to feet and inches, using classes Meters and Distance, 
    where the convertToDistance function returns a Distance object representing the converted distance.
*/

#include <iostream>

class Distance {
private:
    int feet;
    int inch;

public:
    Distance(int ft = 0, int in = 0) : feet(ft), inch(in) {}

    void display() {
        std::cout << "Distance: " << feet << " feet " << inch << " inches" << std::endl;
    }
};

class Meters {
private:
    double meters;

public:
    Meters(double m = 0.0) : meters(m) {}

    //function which returns the newely created Distance class object(inside meters class)
    Distance convertToDistance() {
        int totalInches = static_cast<int>(meters * 3.3 * 12);
        int feet = totalInches / 12;
        int inch = totalInches % 12;
        return Distance(feet, inch);
    }
};

int main() {
    double metersValue;
    std::cout << "Enter value in meters: ";
    std::cin >> metersValue;

    Meters meters(metersValue);
    Distance convertedDistance = meters.convertToDistance();  //becomes as Distance class object

    convertedDistance.display();

    return 0;
}
