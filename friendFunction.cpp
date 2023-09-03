#include<iostream>

using namespace std;

class Second ; //Decleration of class

class First{
    private:
        int number;
    
    public:
        First() : number(5) {}
    
        friend int multiply(First,Second);
};

class Second{
    private:
        int number;
    
    public:
        Second() : number(6) {}

        friend int multiply(First,Second);
};

int multiply(First num1 , Second num2){
    return (num1.number * num2.number);
}

int main(){
    First obj1;
    Second obj2;

    cout<< "The product is " <<multiply(obj1,obj2) <<endl;
    return 0;
}