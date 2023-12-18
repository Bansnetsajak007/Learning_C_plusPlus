/*
    Static member functions are the type of functions in C++
    which can be called without even creating the instance of a class

    Static member functions are often used for operations that are not dependent on the state
    of individual objects but are related to the class in some way.
*/

#include <iostream>

using namespace std;

class MathUtils
{
private:
    static int number;

public:
    static int square(int x)
    {
        return x * x;
    }

    static int factorial(int n)
    {
        if (n <= 0)
        {
            return 1;
        }
        return n * factorial(n - 1);
    }

    static void incrementNumber()
    {
        number += 1;
    }
};

MathUtils::number = 0;

int main()
{
    int square = MathUtils::square(6);
    int fact = MathUtils::factorial(5);

    MathUtils::incrementNumber();

    cout << "Static data member is " << MathUtils::number << endl;
    cout << square << endl << fact;
    return 0;
}
