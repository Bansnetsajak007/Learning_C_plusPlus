// Program to update the fourth object on file using C++ ?

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    float gpa;
};

int main() {
    const int num_students = 4;
    Student students[num_students];

    ofstream output_file("data.txt");
    for (int i = 0; i < num_students; ++i) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> students[i].id;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "GPA: ";
        cin >> students[i].gpa;

        output_file << students[i].id << " " << students[i].name << " " << students[i].gpa << endl;
    }
    output_file.close();

   
    int record_to_update = 4;
    cout << "\nEnter the updated values for the fourth record:\n";
    cout << "ID: ";
    cin >> students[record_to_update - 1].id;
    cout << "Name: ";
    cin >> students[record_to_update - 1].name;
    cout << "GPA: ";
    cin >> students[record_to_update - 1].gpa;

    cout << "\nUpdated details for the fourth student:\n";
    cout << "ID: " << students[record_to_update - 1].id << "\n";
    cout << "Name: " << students[record_to_update - 1].name << "\n";
    cout << "GPA: " << students[record_to_update - 1].gpa << "\n";


    output_file.open("data.txt");
    for (int i = 0; i < num_students; ++i) {
        output_file << students[i].id << " " << students[i].name << " " << students[i].gpa << endl;
    }
    output_file.close();

    return 0;
}