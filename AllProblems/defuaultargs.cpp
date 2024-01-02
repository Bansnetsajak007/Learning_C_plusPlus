/*
    C++ allows to assign default values to a function paramater called default args
*/

#include<iostream>

using namespace std;

class Calculate{
  public:
  //when calling this add function if programmer doesnot passes any arguments then by default of those arguments become 0
    void add(int x=0 , int y=0){
        cout<< x + y <<endl;
    }  
};

int main(){
    Calculate first;
    Calculate second_;
    second_.add();
    first.add(1,69);

    return 0;
}