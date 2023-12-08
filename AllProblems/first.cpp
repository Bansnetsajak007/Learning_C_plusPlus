//Programm to demonstrat concepts of CLASSES, OBJECTS AND CONSTRUCTORS 


#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int id;
    string name;

private:
    void get_details() {  // This method is now private
        cout << "Enter student id: ";
        cin >> id;

        cout << "Enter student Name: ";
        cin >> name;
    }

    void display_details() {  // This method is now private
        cout << "Student ID: " << id << std::endl;
        cout << "Student Name: " << name << std::endl;
    }

public:
    // Constructor function
    Student(int studentId = 0, const string& studentName = "") : id(studentId), name(studentName) {}


    // A public method that can be accessed from outside the class
    void accessPrivateMethods() {
        get_details();      
        display_details();  
    }
};

int main() {

    Student std1;
    Student std2;

    // This will give an error because get_details() is private
    // std1.get_details();  
    // std1.display_details();  

    std1.accessPrivateMethods();
    std2.accessPrivateMethods();

    return 0;
}
