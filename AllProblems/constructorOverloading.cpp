//program demonstrating the constructor overloading

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Default constructor
    Person() {
        name = "Unnamed";
        age = 0;
    }

    // Parameterized constructor with one paramater
    Person(string n) {
        name = n;
        age = 0;
    }

    // Parameterized constructor with tow parameter name and age
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {

    //objects are being created dynamically
    Person* person1 = new Person();  //Default constructor gets called
    Person* person2 = new Person("Hari");  //constructor with only name paramater gets called
    Person* person3 = new Person("Hari" , 45);  // constructor with name and age gets called

    person1->display();
    person2->display();
    person3->display();

    delete person1;
    delete person2;
    delete person3;


    return 0;
}
