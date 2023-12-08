/*
    The new and delete operators in C++ are basically to used to dynamically allocate the memory during runtime.
    They allow you to allocate memory for objects on the heap and deallocate that memory when it's no longer needed. 
*/


#include<iostream>
#include<string>

using namespace std;

class Person{
    private:
        string name;
        
    public:
        Person(const string &n) : name(n) {
            cout <<"Creating the instance" <<endl;
        }

        ~Person()  {
            cout <<"Destroying the instance" <<endl;
        }

        void display_name(){cout << "Hi, Iam  " << name <<endl;}  
};


int main(){

    //creating the pointer that points to instance of Person class
    Person *personPointer = new Person("Sajak");


    personPointer->display_name();

    delete personPointer;
    
    return 0;
}