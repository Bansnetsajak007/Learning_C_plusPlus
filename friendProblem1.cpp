#include<iostream>

using namespace std;

class A {
    private:
        int meter;

    public:
        A(int m) : meter(m) {}

    friend class C;
};

class B {
    private:
        int centiMeter;

    public:
        B(int cm) : centiMeter(cm) {}

    friend class C;
};

class C {
    public:
        void calculateTotal(A obj1 , B obj2){
            int meter = (obj2.centiMeter / 100);

            cout << "Total sum is " << (obj1.meter + meter);
        }
};


int main(){
    A objectOfa(5);
    B objectOfb(2000);

    C objectOfc;

    objectOfc.calculateTotal(objectOfa,objectOfb);
    return 0;
}