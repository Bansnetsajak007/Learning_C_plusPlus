/*
    program to overload the unary minus operator using friend function
*/

#include<iostream>

using namespace std;

class Number {
    private:
        int number;

    public:
        Number(int value) : number(value) {}
    
        friend Number operator-(const Number& num);

        void display() {
            cout << "value " <<number;
        }
};

Number operator- (const Number& num){
    return Number(-num.number); //returning the new object
}

int main(void) {
    Number num1(69);

    Number result = -num1; //using the overloaded unary minus operator  
    
    result.display();
    return 0;
}