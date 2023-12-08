#include<iostream>
#include<string>

using namespace std;

class Student {
    /*protected members are accessible from 
    within the same class and its derived classes.*/
    protected:
        string name;
        int id;

    public:
        Student(const string& studentName, int studentID): name(studentName), id(studentID){}

        /*virtual functions tells the compiler that this 
        function's behavior can be overridden by derived classes.*/
        virtual void display_details(){
            cout << "Student Name: " << name <<endl;
            cout << "Student ID: " << id <<endl;    
        }
};

//inheriting this class from parent class (Student)
class ComputerScienceStudent : public Student{
    private:
        int cs_marks[3];

    public: 
        ComputerScienceStudent(const std::string& studentName, int studentId, int marks[3])
          : Student(studentName,studentId){
            for(int i = 0 ; i < 3 ; i++){
                cs_marks[i] = marks[i];
            }
        }

    void display_details() override {
        Student :: display_details();
        cout<< "Marks in Computer Science: ";
        for(int i = 0 ; i < 3 ; i++){
            cout << cs_marks[i] << "";
        }
        cout <<endl;
    }

    double calculate_average() {
        double total = 0;
        for(int i = 0 ; i< 3 ; i++){
            total += cs_marks[i];
        }

        return total / 3;
    }

};

int main(){
    int cs_marks[] = {56,45,67};

    ComputerScienceStudent csstudent ("Sajak", 12, cs_marks);

    cout<< "computer science details " <<endl;
    csstudent.display_details();
    cout << "Average marks: ";
    cout<<csstudent.calculate_average() <<endl;

    return 0;
}