#include<iostream>
#include<string>

using namespace std;

class Collage {
    string name = "C++ collage";

    public:
        void display_name(){
        cout<< "The name of the collage is " <<name;
    }
};

int main(){
    Collage collage1;
    collage1.display_name();
    return 0 ; 
}