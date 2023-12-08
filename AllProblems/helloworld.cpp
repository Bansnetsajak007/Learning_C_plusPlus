#include<stdio.h>
#include<iostream>

using namespace std;

class Greet{
    public:
        void print_greet(int a){
            printf("Hello world");
        }

        void greet(int x){
            printf("%d", x);
            cout <<"Hello world!!";
        }
};


int main(){
    // printf("Hello world form C\n");
    // cout << "Hello world from c++";
    Greet obj;
    obj.greet(1);
    return 0;
}