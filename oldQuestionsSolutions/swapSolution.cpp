/*
Create a function called swaps() that interchanges the values of the two 
arguments sent to it (pass these arguments by reference).  Make the function into a template, 
so it can be used with all numerical data types (char, int, float, and so on). Write a main() program 
to exercise the function with several types.
*/

#include <iostream>
using namespace std;

template <class T>
void swaps(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}


int main() {
    int a = 10;
    int b = 20;
    cout<<"Before swap" << endl;
    cout<<"a : " << a << endl;
    cout<<"b : " << b << endl;
    swaps(a, b);
    cout<<"After swap" << endl;
    cout<<"a : " << a << endl;
    cout<<"b : " << b << endl;

    return 0;
}