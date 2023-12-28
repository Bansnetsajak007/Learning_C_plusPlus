#include <iostream>
using namespace std;

class MathUtils {
private:
    static int number;

public:
    static int square(int x) {
        return x * x;
    }

    static int factorial(int n) {
        if (n <= 0) {
            return 1;
        }
        return n * factorial(n - 1);
    }

    static void incrementNumber() {
        number += 1;
    }

    static int getNumber() {
        return number;
    }
};

int MathUtils::number = 68;

int main() {
    int squareResult = MathUtils::square(6);
    int factorialResult = MathUtils::factorial(5);
    MathUtils::incrementNumber();

    cout << "Static data member is " << MathUtils::getNumber() << endl;
    cout << "Square of 6 is: " << squareResult << endl;
    cout << "Factorial of 5 is: " << factorialResult << endl;

    return 0;
}
