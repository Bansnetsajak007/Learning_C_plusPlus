#include<iostream>
using namespace std;
class Area
{
    public:
    //pure virtual function means this is an abstract base class (object cannot be createdd from this class)
    virtual void getData() = 0;
    virtual void area() = 0;
};
class triangle: public Area
{
    int base, height;
    float a;
    public:
    void getData ()
    {
        cout<<"Enter base: ";
        cin>>base;
        cout<<'\n';

        cout<<"Enter height: ";
        cin>>height;
        cout<<'\n';
    }
    void area()
    {
        a=0.5*base*height;
        cout<<a <<"\n";
    }
};
class rectangle: public Area
{
    int length, breadth;
    float ar;
    public:
    void getData()
    {
        cout<<"Enter length: ";
        cin>>length;
        cout<<'\n';

        cout<<"Enter breadth: ";
        cin>>breadth;
        cout<<'\n';
    }
    void area()
    {
        ar=length*breadth;
        cout<<ar <<"\n";
    }
};

int main() {

    triangle triangleObj;
    rectangle rectObj;

    triangleObj.getData();
    triangleObj.area();

    rectObj.getData();
    rectObj.area();



    return 0;
}