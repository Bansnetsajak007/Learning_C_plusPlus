//using OOP aproach

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
public:
    int id;
    string name;
    float gpa;

    void inputDetails() {
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin.ignore(); // Ignore newline character in buffer
        getline(cin, name);
        cout << "GPA: ";
        cin >> gpa;
    }

    void displayDetails() const {
        cout << "ID: " << id << "\n";
        cout << "Name: " << name << "\n";
        cout << "GPA: " << gpa << "\n";
    }
};

int main() {
    const int num_students = 4;
    Student students[num_students];

    ofstream output_file("data.txt");
    for (int i = 0; i < num_students; ++i) {
        cout << "Enter details for student " << i + 1 << ":\n";
        students[i].inputDetails();

        output_file << students[i].id << " " << students[i].name << " " << students[i].gpa << endl;
    }
    output_file.close();

    int record_to_update = 4;
    cout << "\nEnter the updated values for the fourth record:\n";
    students[record_to_update - 1].inputDetails();

    cout << "\nUpdated details for the fourth student:\n";
    students[record_to_update - 1].displayDetails();

    output_file.open("data.txt");
    for (int i = 0; i < num_students; ++i) {
        output_file << students[i].id << " " << students[i].name << " " << students[i].gpa << endl;
    }
    output_file.close();

    return 0;
}
