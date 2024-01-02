/*
    An inline function is a function that is expanded in line when it is called. When the inline function is called 
    whole code of the inline function gets 
    inserted or substituted at the point of the inline function call.

*/

#include<iostream>

using namespace std;
// Inline function declaration
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    int result = add(x, y); // The function call is replaced with the function body
    cout<< result;
    return 0;
}
