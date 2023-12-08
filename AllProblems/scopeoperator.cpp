/*
    How can you define a member function outside a class ? Simply by using scope operator (::)
*/


#include<iostream>

using namespace std;

class Mainclass{
    public:
        int numer = 69;

        void display(); // class must be decleared
};

//defination of display function
void Mainclass::display(){
    cout<<"The number is " <<Mainclass::numer ;
}

int main(){
    Mainclass obj;

    obj.display();
    return 0;
}