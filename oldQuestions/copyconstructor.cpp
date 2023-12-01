//WAP to demonstrate the concept of copy costructor

// copy constructor is a type of constructor wich is used to copy data of one object to another

#include<iostream>

using namespace std;

class Wall{
    private:
        double length;
        double height;

    public:
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
  // create an object of Wall class
  Wall wall1(10.5, 8.6);

  // copy contents of wall1 to wall2
  //Here, the wall2 object calls its copy constructor by passing the address 
// of the wall1 object as its argument i.e. &obj = &wall1.
  Wall wall2 = wall1;

  // print areas of wall1 and wall2
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}