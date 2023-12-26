/*
Wap to find smallest of two integers, float and double using function overloading and templates
*/

#include<iostream>

template <typename T>
T smallest(T firstNum , T secondNum) {
    if(firstNum < secondNum) {
        std::cout<< "Smallest: " <<firstNum<< std::endl;
    } else {
            std::cout<< "Smallest: " <<secondNum<< std::endl;
    }
}


class Smallest {
    private:

    public:

        void min(int a , int b) {
            smallest(a,b);
        }

        void min(float a , float b) {
            smallest(a,b);
        }

        void min(double a , double b) {
            smallest(a,b);
        }


};

int main() {
    Smallest s1;

    s1.min(12,10);
    s1.min(12.5f,14.78f);
    s1.min(4.64378,1.90);

    return 0;
}