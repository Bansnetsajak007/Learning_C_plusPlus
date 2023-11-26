#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Student {
private:
    int id;
    string name;

public:
    void getDetails() {
        cout << "Enter Student id: ";
        cin >> id;
        cout << "Enter Student name: ";
        cin.ignore();  // Ignore newline character in buffer
        getline(cin, name);
    }

    void displayDetails() const {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    // Function to write student details to a text file in CSV format
    void writeToCSV(ofstream& file) const {
        file << id << "," << name << endl;
    }

    // Function to read student details from a text file in CSV format
    void readFromCSV(ifstream& file) {
        char comma; // to read and discard the comma
        file >> id >> comma >> ws; // ws is used to skip whitespaces, if any
        getline(file, name);
    }
};

int main() {
    Student std;
    ofstream file("students.csv");

    if (!file.is_open()) {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    std.getDetails();
    std.writeToCSV(file);

    cout << "Written to file successfully." << endl;
    file.close();

    ifstream fileRead("students.csv");

    if (!fileRead.is_open()) {
        cerr << "Error opening the file for reading!" << endl;
        return 1;
    }

    // Reading the data back from the file
    std.readFromCSV(fileRead);
    std.displayDetails();

    fileRead.close();

    return 0;
}
