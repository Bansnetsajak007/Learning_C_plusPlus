#include<iostream>
using namespace std;

template<typename T, typename U>
T swap(T arr[], U size)
{
    int i, j;
    T temp;
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return *arr;
}

template<typename T>
void displayArray(T arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i] <<" ";
    }
        cout<<"\n";
}


int main()
{
    int intArray[] = {10, 90, 20, 30, 100, 69, 36, 49, 1, 50};
    int intArrSize = sizeof(intArray) / sizeof(int);
    float floatArray[] = {1.2f, 2.6f, 6.9f, 3.6f, 9.6f, 6.3f, 3.33f, 1.11f, 0.10f, 100.001f};
    int floatArrSize = sizeof(floatArray) / sizeof(float);

    cout << "Before integer swapping: ";
    displayArray(intArray , intArrSize);

    cout << "Before Float swapping: ";
    displayArray(floatArray , floatArrSize);


    int intResult = swap(intArray, 10);
    float floatResult = swap(floatArray, 10);


    cout << "\nAfter integer swapping: ";
    displayArray(intArray , intArrSize);

    cout << "\nAfter float swapping: ";
    displayArray(floatArray , floatArrSize);

    return 0;
}