// wap to determine the largest number among two input numbers in two different classes using friend function.

#include<iostream>

using namespace std;

class Second; 

class First {
    private:
        int number;

    public:
        void getNum() {
            cout << "Enter first class number: ";
            cin >>number;
        }

    friend void greatesNumber(const First& first , const Second& second);
};

class Second {
    private:
        int number;

    public:
        void getNum() {
            cout << "Enter second class number: ";
            cin >>number;
            cout<<endl;
        }

    friend void greatesNumber(const First& first , const Second& second);
};

void greatesNumber(const First& first , const Second& second) {

    if(first.number > second.number) {
        cout <<"Greatest number is : " << first.number <<" From the class name First";
    } else {
        cout <<"Greatest number is : " << second.number <<" From the class name Second";
    }
}

int main() {
    First first;
    Second second;
    //getting number from the user
    first.getNum();
    second.getNum();
    greatesNumber(first , second);
    return 0;
}