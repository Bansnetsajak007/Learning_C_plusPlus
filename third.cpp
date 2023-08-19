/*Define a student class (with necessary constructors and member functions) in Object Oriented Programming 
(abstract necessary attributes and their types). (Write a complete code in C++  programming language).
Derive a computer Science and Mathematics class from student class adding necessary attributes (at least three subjects). 
Use these classes in a main function and display the average marks of computer science and mathematics students. */


#include <iostream>
#include <string>
#include <vector>

class Student {
protected:
    std::string name;
    int id;

public:
    Student(const std::string& studentName, int studentId) : name(studentName), id(studentId) {}

    virtual void displayDetails() {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Student ID: " << id << std::endl;
    }
};

class ComputerScienceStudent : public Student {
private:
    int csMarks[3]; // Marks for three Computer Science subjects

public:
    ComputerScienceStudent(const std::string& studentName, int studentId, int marks[3])
        : Student(studentName, studentId) {
        for (int i = 0; i < 3; i++) {
            csMarks[i] = marks[i];
        }
    }

    void displayDetails() override {
        Student::displayDetails();
        std::cout << "Computer Science Marks: ";
        for (int i = 0; i < 3; i++) {
            std::cout << csMarks[i] << " ";
        }
        std::cout << std::endl;
    }

    double calculateAverage() {
        double total = 0;
        for (int i = 0; i < 3; i++) {
            total += csMarks[i];
        }
        return total / 3;
    }
};

//will check this soon
class MathematicsStudent : public Student {
private:
    int mathMarks[3]; // Marks for three Mathematics subjects

public:
    MathematicsStudent(const std::string& studentName, int studentId, int marks[3])
        : Student(studentName, studentId) {
        for (int i = 0; i < 3; i++) {
            mathMarks[i] = marks[i];
        }
    }

    void displayDetails() override {
        Student::displayDetails();
        std::cout << "Mathematics Marks: ";
        for (int i = 0; i < 3; i++) {
            std::cout << mathMarks[i] << " ";
        }
        std::cout << std::endl;
    }

    double calculateAverage() {
        double total = 0;
        for (int i = 0; i < 3; i++) {
            total += mathMarks[i];
        }
        return total / 3;
    }
};

int main() {
    int csMarks[] = {85, 90, 78};
    int mathMarks[] = {92, 88, 95};

    ComputerScienceStudent csStudent("Alice", 123, csMarks);
    MathematicsStudent mathStudent("Bob", 456, mathMarks);

    std::cout << "Computer Science Student Details:" << std::endl;
    csStudent.displayDetails();
    std::cout << "Average Marks: " << csStudent.calculateAverage() << std::endl;

    std::cout << "\nMathematics Student Details:" << std::endl;
    mathStudent.displayDetails();
    std::cout << "Average Marks: " << mathStudent.calculateAverage() << std::endl;

    return 0;
}
