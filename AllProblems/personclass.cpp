//Wap a program to sort array of an integer and floating type number using template

#include<iostream>
using namespace std;
template <typename T, typename U>
T* sort(T arr[], U n)
{
	T temp;
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if (arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	return arr;	
}


int main()
{
	 int intArray[100] = {1, 10, 100, 3, 2, 5, 20, 18, 28, 0, 12, 4};
    float floatArray[100] = {0.1f, 5.10f, 1.4f, 5.4f, 7.09f, 10.2f, 3.19f, 29.1f, 2.12f, 3.12f, 0.12f, 5.55f};
    
    int* intResult;
    float* floatResult;
    intResult=sort(intArray, 12);
    floatResult= sort(floatArray, 12);
    
    
    cout<<"Integer after sorting:\n";
    for(int i=0; i<12; i++)
    {
    	cout<<intResult[i]<<"  ";
	}
	cout<<endl;
	
	cout<<"Float after sorting:\n";
    for(int i=0; i<12; i++)
    {
    	cout<<floatResult[i]<<"  ";
	}
	return 0;
}