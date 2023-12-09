#include<iostream>

using namespace std;

int main(){
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	try
	{
	if(age>=18)
	{
		cout<<"you're able to vote!!\n";
	}
	else 
		throw(age);
	}
	
	catch(int& age)
	{
		cout<<"Try again! After 18";
	}
}