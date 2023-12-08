//Wap using function template to find largest number of an array of type int and float

#include<iostream>

using namespace std;

template <typename T, typename U>
T MAX(T* arr , U size) {
    T greatest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > greatest) {
            greatest = arr[i];
        }
    }

    return greatest;
}

int main() {
    int iArray[] = {3,4,69,56};
    float fArray[] = {3.4,56.7,5.4,3.09}; 
    float floatGreates = MAX(fArray, 4);
    int intGreates = MAX(iArray, 4);
    cout<< "Largest number in integerarray is :" <<intGreates;
    cout<<endl;
    cout<< "Largest number in float array is :" <<floatGreates;
    return 0;
}