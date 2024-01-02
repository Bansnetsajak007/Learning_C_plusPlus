//overloading unary minus operator

#include<iostream>  
using namespace std;

class A {
    int x;
public:
    A(int a) {
        x = a;
    }

    // Overloading the '-' (minus) operator
    A operator-() {
        x = -x;
        return *this;
    }

    void display() {
        cout << x << endl;
    }
};

int main() {
    A ob(40);
    
    cout << "Before overloading: ";
    ob.display();

    -ob; // This calls the overloaded '-' operator

    cout << "After overloading: ";
    ob.display();

    return 0;
}
