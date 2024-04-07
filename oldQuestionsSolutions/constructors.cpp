//WAP to demonstrate the concept of copy costructor with its important features of constructors

// copy constructor is a type of constructor wich is used to copy data of one object to another of same object

/*

Features of constructors are:

1. Constructors in C++ are specialized functions with the same name as their corresponding classes.
  
2. They are responsible for initializing object data members, 
ensuring that objects start with a valid and well-defined state.

3. Constructors can be overloaded, allowing a class to have multiple 
constructors with different parameter lists for flexibility in object initialization.

4. They are implicitly invoked upon object instantiation, meaning there's no need for 
users to explicitly call them.

5. Initialization lists can be used within constructors to directly initialize data members, 
providing an efficient and clear mechanism for setting initial values.

*/

#include<iostream>

using namespace std;

class Wall{
    private:
        double length;
        double height;

    public:
      //default constructor
        Wall(){

        }
        //parameterized constructor
        Wall(double length , double height) : length(length) , height(height) {}

        //copy constructor
        Wall(Wall& obj){
            length = obj.length;
            height = obj.height;
        }

        double calculateArea() {
            return length * height ;
        }
};

int main() {
  // create an object of Wall class (calls parameterized constructor)
  Wall wall1(10.5, 8.6);
  //default constructor gets called
  Wall obj;

  // copy contents of wall1 to wall2
  //Here, the wall2 object calls its copy constructor by passing the address 
// of the wall1 object as its argument i.e. &obj = &wall1.
//copy constructor gets call in this
  Wall wall2 = wall1;

  // print areas of wall1 and wall2
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}