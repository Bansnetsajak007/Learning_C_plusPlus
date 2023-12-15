#include<iostream>

using namespace std;

class Complex {
    private:
        double real;
        double img;

    public:
        Complex(double real , double img) : real(real) , img(img) {}

        friend Complex operator+ (const Complex& rhs , const Complex& lhs);

        void display() {
            cout << real << " + " << img << "i" << std::endl;
        }
};

//friend func defination

Complex operator+(const Complex& rhs , const Complex& lhs) {
    return Complex(rhs.real + lhs.real , rhs.img + lhs.img);
}   

int main() {
    Complex c1(6.7 , 2.2);
    Complex c2(2.33 , 4.008);

    Complex result = c1 + c2 ;

    result.display();

    return 0;
}