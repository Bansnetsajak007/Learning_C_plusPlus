/*
Exception handling in C++ is a mechanism to deal with runtime errors in a structured way.
It allows you to separate the error-handling code from the normal code, making your programs more robust.
The basic idea is to throw an exception when an error occurs and catch it where you can handle it appropriately. without altering
the normal flow of the program.
*/

#include<iostream>

using namespace std;

void divide(int firstNum , int secondNum) {
    if(secondNum == 0) {
        throw runtime_error("Cannot divide by zero");
    } else {
        cout<<"Result: " <<(firstNum / secondNum)<<endl;
    }
}

int main() {
    int firstNum, secondNum;
    cout<<"Enter First number: ";
    cin>> firstNum;
    cout<<"Enter second number: ";
    cin>> secondNum;

    try{
        divide(firstNum,secondNum);
    } catch(const exception& e) {
        std::cerr << e.what() << '\n';
    }

    //  divide(firstNum,secondNum);

     cout<<"Hello this is program";
    
    return 0;
}