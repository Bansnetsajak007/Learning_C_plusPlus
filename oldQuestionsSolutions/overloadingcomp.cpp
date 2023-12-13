/*
    wap using function overloading to compare two integer and two float numbers
*/

#include<iostream>

using namespace std;

class overloadingcomp
{
private:
    int firstNum , secondNum;
public:
    overloadingcomp() {
        firstNum = 0;
        secondNum = 0;
    }
    overloadingcomp(int firstNum , int secondNum) : firstNum(firstNum) , secondNum(secondNum) {};

    void compare(int num1 , int num2) {
        if(num1 > num2) {
            cout << "Greatest : " <<num1<<endl ;
        } else {
            cout << "Greatest : " <<num2<<endl ;
        }
    }

    void compare(float num1 , float num2) {
        if(num1 > num2) {
            cout << "Greatest : " <<num1<<endl ;
        } else {
            cout << "Greatest : " <<num2<<endl ;
        }
    }
};

int main() {
    overloadingcomp obj;
    obj.compare(12,45);
    obj.compare(12.09f,3.45f); 
    return 0;
}




