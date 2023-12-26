
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Student
{
public:
    int roll;
    char name[50];
    float marks;

    void Readdata()
    {
        cout << "Enter the roll Number: ";
        cin >> roll;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the Marks: ";
        cin >> marks;
    }

    void DisplayData()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    string data;
    const int numStudents = 3; // You can adjust the number of students as needed
    Student students[numStudents];
    Student obj;

    // Input data for all students
    for (int i = 0; i < numStudents; ++i)
    {
        cout << "Enter details of student " << i + 1 << ":\n";
        students[i].Readdata();
    }

    // Display all data entered
    cout << "\nDetails of all students:\n";
    for (int i = 0; i < numStudents; ++i)
    {
        cout << "\nDetails of student " << i + 1 << ":\n";
        students[i].DisplayData();
    }

    // Write data to file
   ofstream fout("std.txt", ios::app);
    for (int i = 0; i < numStudents; ++i) {
        fout << students[i].roll << " " << students[i].name << " " << students[i].marks << endl;
    }
    cout << "\nData has been written to 'std.txt' successfully." << endl;

    fout.close();

    return 0;
}


