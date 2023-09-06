/*
    What are templates in c++?
    Templates are powerful features of C++ which allows us to write generic (common) programs.There are two types of 
    templates in c++ function Templates and class templates.

    Similar to function templates, we can use class templates to create a single class to work with different data types.

    in nutshell templates simply allows you to work with any data type bu defining the template once.
*/


// C++ program to demonstrate the use of class templates

#include <iostream>
#include<string>
using namespace std;

// Class template
template <class T>
class Number {
   private:
    // Variable of type T
    T num;

   public:
    Number(T n) : num(n) {}   // constructor

    T getNum() {
        return num;
    }
};

int main() {

    // create object with int type
    Number<int> numberInt(7);

    // create object with double type
    Number<double> numberDouble(7.7);

    // create object with string type
    Number<string> numberstring("6");    

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;
    cout << "string Number = " << numberstring.getNum() << endl;

    return 0;
}