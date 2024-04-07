#include<iostream>
#include<cmath>
using namespace std;

class Distance{
    private:
        int X , Y,totalDistance;

    public:
        Distance(int x, int y) : X(x), Y(y) {}

        void power(){
            cout << "Distance"<<totalDistance<<endl;
        }

        friend void calculateDistance(Distance& distance1 , Distance&  distance2);
};

void calculateDistance(Distance& distance1 , Distance&  distance2) {
    // Calculate squared distance between two points
    int xDiff = distance2.X - distance1.X;
    int yDiff = distance2.Y - distance1.Y;
    int result = pow(xDiff, 2) + pow(yDiff, 2);
    
    // Calculate square root of squared distance to get final distance
    double finalDistance = sqrt(result);
    
    cout << "Distance is: " << finalDistance << endl;
}

int main() {
    Distance distance1(2,4);
    Distance distance2(5,6);

    calculateDistance(distance1, distance2);

    return 0;
}