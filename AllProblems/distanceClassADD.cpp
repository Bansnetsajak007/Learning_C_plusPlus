//write a friend function to addd distance of two class


#include <iostream>

class Distance2; // Forward declaration

class Distance1 {
private:
    int feet;
    int inch;

public:
    Distance1(int ft, int in) : feet(ft), inch(in) {}

    // Friend function to add distances
    friend Distance1 addDistances(const Distance1& d1, const Distance2& d2);

    void display() {
        std::cout << "Feet: " << feet << " Inches: " << inch << std::endl;
    }
};

class Distance2 {
private:
    int feet;
    int inch;

public:
    Distance2(int f, int m) : feet(f), inch(m) {}

    friend Distance1 addDistances(const Distance1& d1, const Distance2& d2);

    void display() {
        std::cout << "Feet: " << feet << " Inches: " << inch << std::endl;
    }
};

// Friend function to add distances
Distance1 addDistances(const Distance1& d1, const Distance2& d2) {
    int total_feet = d1.feet + d2.feet; 
    int total_inches = d1.inch + d2.inch;

    return Distance1(total_feet, total_inches);
}

int main() {
    Distance1 distance1(5, 8);
    Distance2 distance2(2, 50);

    Distance1 result = addDistances(distance1, distance2);

    std::cout << "Resultant Distance:" << std::endl;
    result.display();

    return 0;
}
