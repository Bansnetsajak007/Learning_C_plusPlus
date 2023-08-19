#include<iostream>

using namespace std;

class Triangle{
    private:
        double base;
        double height;

    public:
        void get_details(){
            cout <<"Enter Base and Height of Triangle: ";
            cin >> base >>height;
        }

        double display_details(){
            return (0.5 * (base * height));
        }
};

int main(){
    Triangle triangle;
    double result = 0;
    triangle.get_details();
    result = triangle.display_details();

    cout <<"The Area of triangle is: " <<result;

    return 0;
}