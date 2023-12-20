#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;

    void displayDetails() const {
        cout << "Student Name: " << name << endl;
        cout << "Student Marks: " << marks << endl;
    }
};

class StudentDatabase {
private:
    const string filename = "students.dat";
    Student students[10];

public:

    void inputStudentData() {
        for (int i = 0; i < 2; ++i) {
            cout << "Enter Roll No for student " << i + 1 << ": ";
            cin >> students[i].rollNo;

            cout << "Enter Name for student " << i + 1 << ": ";
            cin.ignore(); // Ignore newline 
            getline(cin, students[i].name);

            cout << "Enter Marks for student " << i + 1 << ": ";
            cin >> students[i].marks;
        }
    }

    //functions that writes data
    void writeDataToFile() const {
        ofstream outFile(filename, ios::binary);

        if (!outFile) {
            cout << "Error opening file for writing." << endl;
            return;
        }

        outFile.write(reinterpret_cast<const char*>(students), sizeof(students));
        outFile.close();
    }

    // function that read the data and display
    void searchAndDisplay(int rollToSearch) const {
        ifstream inFile(filename, ios::binary);

        if (!inFile) {
            cout << "Error opening file for reading." << endl;
            return;
        }

        Student student;
        bool found = false;

        while (inFile.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
            if (student.rollNo == rollToSearch) {
                found = true;
                student.displayDetails();
                break;
            }
        }

        if (!found) {
            cout << "Student with Roll No " << rollToSearch << " not found." << endl;
        }

        inFile.close();
    }
};

int main() {
    StudentDatabase database;

    database.inputStudentData();

    database.writeDataToFile();

    int rollToSearch;
    cout << "Enter Roll No to search for a student: ";
    cin >> rollToSearch;

    database.searchAndDisplay(rollToSearch);

    return 0;
}
