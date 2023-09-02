#include <iostream>
using namespace std;

class Person{
  
  // declaring private class data members 
private:
  string name;
  int age;
  
public: 
  Person(string person_name, int person_age)
  {
      cout<<"Constructor for both name and age is called"<<endl;
      name = person_name;
      age = person_age;
  }
  
  Person(const Person& obj)
  {
      cout<<"Copy constructor is called"<<endl;
      name = obj.name;
      age = obj.age;
  }
  // display function to print the class data members value 
  void display()
  {
      cout<<"Name of current object: "<<name<<endl;
      cout<<"Age of current object: "<<age<<endl;
      cout<<endl;
  }
  
};
int main() 
{
    // creating objects of class using parameterized constructor
    Person obj1("First person",25);
    
    // printing class data members for first object 
    obj1.display();
    
    // creating copy of the obj1
    Person obj2(obj1); //calls the copy constructor
    
    // printing class data members for second object 
    obj2.display();
    
    return 0;
}