// will fixt this anyhow


#include <iostream>

using namespace std;

class NuumberSecond; //forward decration

class NuumberFirst{
    public:
        int x;
        //constructor
        NuumberFirst(int num) : x(num) {}
        NuumberFirst(){
            //default constructor
        }
        
        operator NuumberFirst() const {
            return NuumberFirst(y);
        }
        
        
        void display() {
            cout<<"Result = " <<x;
        }
};

class NuumberSecond{
    public:
        int y;
        //constructor
        NuumberSecond(int num) : y(num) {}
        
        NuumberFirst operator+(const NuumberFirst &obj) {
            int finalResult = obj.x + y;
            NuumberFirst result(finalResult);
            return result;
        }
        
};

int main()
{
    NuumberFirst firstnum(45);
    NuumberSecond secondnum(45);
    
    NuumberFirst result = firstnum + secondnum;
    
    result.display();
    
    

    return 0;
}



