//wap using class templates to find the sum of first three numbers of an array
#include<iostream>

using namespace std;

template <class T> 
class Number{
    private:
       static const int size = 8; 
        T array[size];
        T sum = 0;
    
    public:
        Number() {}  //default constructor
        void initializeArray() {
            for(int i = 0 ; i < size ; i++) {
            cout << "Enter the elements of array : ";
            cin>> array[i];
            }
            cout<<endl;
        }

        void printArray() {
            
                cout<<"Elements in array are: " <<endl;
            for (int i = 0; i < size; i++)
            {
                cout<<array[i] << "\t";
            }
            cout<<endl;
            
        }

        T sumOfThree() {
            int i = 0;
            while (i != 3) {
                sum += array[i];
                i++;
            }


            return sum;
        }
};

int main() {
    float intResult = 0;
    Number <int> obj;
    Number <float> obj1;
    // obj.initializeArray();
    obj1.initializeArray();
    // obj.printArray();
    intResult = obj1.sumOfThree();
    cout<<intResult<<endl;
     return 0;
}