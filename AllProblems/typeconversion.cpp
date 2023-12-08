#include<iostream>

using namespace std;

class Point{
    public:
    int x, y;

    Point(int p1, int p2) : x(p1), y(p2) {}

    
};

int main(){
    Point p(3,6);

    int sum = p.x + p.y ;

    cout <<sum;
    return 0;
}