/*
Wap to find smallest of two integers, float and double using function overloading 
*/

#include<iostream>

class Smallest {
    private:

    public:

        void min(int a , int b) {
            if(a<b){
               std::cout<<"Smallest: "<<a <<std::endl;
            } 
            else {
                std::cout<<"Smallest: "<<b <<std::endl;
            }
        }

        void min(float a , float b) {
            if(a<b){
               std::cout<<"Smallest: "<<a <<std::endl;
            } 
            else {
                std::cout<<"Smallest: "<<b <<std::endl;
            }
        }

        void min(double a , double b) {
            if(a<b){
               std::cout<<"Smallest: "<<a <<std::endl;
            } 
            else {
                std::cout<<"Smallest: "<<b <<std::endl;
            }
        }


};

int main() {
    Smallest s1;

    s1.min(12,10);
    s1.min(12.5f,14.78f);
    s1.min(4.64378,1.90);

    return 0;
}