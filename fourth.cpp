//How virtual funtions actually works

#include<iostream>

using namespace std;

class Shape{
    public:
        virtual void draw(){
            cout << "Drawing a shape";
        }
};

class Circle : public Shape {
    public:
        void draw() override {
            cout << "Drawig a circle";
        }
};

int main(){
    // Shape shape;
    Circle shape;
    shape.draw();
    return 0;
}