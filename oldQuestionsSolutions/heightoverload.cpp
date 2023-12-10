// program to create  class nam height with data members cm (int)
//  and overload the binary+ operator using friend functionto add
// two h1 and h2

// #include <iostream>
// #include<stdio.h>
// using namespace std;

// class Height
// {
// private:
//     int cm;

// public:
//     Height() { cm = 0; }
//     Height(int c) { cm = c; }

//     friend Height operator+(Height h1, Height h2)
//     {
//         Height h;
//         h.cm = h1.cm + h2.cm;
//         return h.cm;;
//     }
// };

// int main(){
//     Height h1(10);
//     Height h2(29);

//     Height h = h1 + h2;
//     // cout<<h;
//     printf("h = %d\n", h);
//     return 0;
// }

#include <iostream>
#include<stdio.h>
using namespace std;

class Height
{
private:
    int cm;

public:
    Height() { cm = 0; }
    Height(int c) { cm = c; }

    friend Height operator+(Height h1, Height h2)
    {
        Height h;
        h.cm = h1.cm + h2.cm;
        return h;
    }

      int getCm() const { return cm; }
};

int main(){
    Height h1(10);
    Height h2(29);

    Height h = h1 + h2;
    cout<<"Total height: "<<h.getCm()<<endl;
    
    return 0;
}