/*
    wap using function overloading to compare two integer and two float numbers

    advantages of operator overloadin

        It improves code readability by allowing the use of familiar operators12.

        It ensures that objects of a class behave consistently with built-in types and other user-defined types13.

        It makes it simpler to write code, especially for complex data types14.

        It allows for code reuse by implementing one operator method and using it for other operators12.

        It is used because it allows programming using notation nearer to the target domain and 
        allows user-defined types a similar level of syntactic support as types built into a language

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




