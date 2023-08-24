#include<iostream>

using namespace std;

class Calculator{
    private:
        double num1 , num2;

    public:
        // Calculator(double n1 , double n2) : num1(n1), num2(n2) {}

        double compute(double n1, double n2){return n1 + n2;}
        double compute(double n1, double n2,double n3){return n1 + n2 + n3;}
};

int main(){
    Calculator calculate;

    cout <<calculate.compute(55.78,78) <<endl;
    cout <<calculate.compute(55.78,78,100);
}