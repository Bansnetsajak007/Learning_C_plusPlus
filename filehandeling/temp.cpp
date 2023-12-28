/*

    Wap to create a class that contains detail information of student of second semester and perform 
    the following operation
    1) Write these information in file
    2) Read the third record
    3) update fourth record by the new record
    5) search the name of record by the student

*/

#include <iostream>
#include <fstream> // file
#include <string>

using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    double marks;

    Student() {}

    Student(const string& n, int roll, double m) : name(n), rollNumber(roll), marks(m) {}

    void display() const {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << ", Marks: " << marks << endl;
    }
};

void writeToFile(const string& filename, const Student& student) {
    ofstream file(filename, ios::app | ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(&student), sizeof(Student));
        cout << "Information written to file successfully." << endl;
        file.close();
    } else {
        cerr << "Unable to open the file." << endl;
    }
}

void readNthRecord(const string& filename, int n) {
    ifstream file(filename, ios::binary);
    if (file.is_open()) {
        Student student;
        file.seekg((n - 1) * sizeof(Student), ios::beg);
        file.read(reinterpret_cast<char*>(&student), sizeof(Student));
        student.display();
        file.close();
    } else {
        cerr << "Unable to open the file." << endl;
    }
}

void updateNthRecord(const string& filename, int n, const Student& newRecord) {
    fstream file(filename, ios::in | ios::out | ios::binary);
    if (file.is_open()) {
        file.seekp((n - 1) * sizeof(Student), ios::beg);
        file.write(reinterpret_cast<const char*>(&newRecord), sizeof(Student));
        cout << "Record updated successfully." << endl;
        file.close();
    } else {
        cerr << "Unable to open the file." << endl;
    }
}

void searchByName(const string& filename, const string& searchName) {
    ifstream file(filename, ios::binary);
    if (file.is_open()) {
        Student student;
        bool found = false;

        while (file.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
            if (student.name == searchName) {
                student.display();
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Student with name '" << searchName << "' not found." << endl;
        }

        file.close();
    } else {
        cerr << "Unable to open the file." << endl;
    }
}

int main() {
    const string filename = "student_records.txt";

    Student student1("Alice", 101, 85.5);
    Student student2("Bob", 102, 76.0);
    Student student3("Charlie", 103, 92.5);

    writeToFile(filename, student1);
    writeToFile(filename, student2);
    writeToFile(filename, student3);

    cout << "\nReading the third record:" << endl;
    readNthRecord(filename, 3);

    cout << "\nUpdating the fourth record:" << endl;
    Student newRecord("David", 104, 88.0);
    updateNthRecord(filename, 4, newRecord);

    cout << "\nSearching for a student by name:" << endl;
    searchByName(filename, "sajak");

    return 0;
}