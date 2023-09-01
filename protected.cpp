#include<iostream>
#include<string>

using namespace std;

class Animal {
    protected:
        int trait = 69;

};

class cats : Animal {
    public:
    void display(){cout<<trait;}
};

int main(){
    cats homecat;

    homecat.display();
}