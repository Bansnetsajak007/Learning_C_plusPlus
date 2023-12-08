#include<iostream>

using namespace std;

template <class T>
class Sports{
    private:
        T totalNum;

    public:
        Sports(T totalNum) : totalNum(totalNum) {}

        T display() {
            cout <<"total numbers of sports : " << totalNum <<endl;
        }
};

int main() {
    Sports <int> intobj(12);
    Sports <float> floatobj(12.896f);
    intobj.display();
    floatobj.display();
    return 0;
}