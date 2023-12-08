#include<iostream>

using namespace std;

class Animal {
    protected:
        int number = 69;
        void eat() {
            cout <<"Eathing..." <<endl;
        }
};

class Dog : public Animal {
    public:
        void call() {
            eat();
            cout<<number;
        }
};

int main() {
    Dog sheard;

    sheard.call();
    return 0;
}