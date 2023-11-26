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
            cout<<"Enter Student id: "<<endl;
            cin >> id;
            cout<<"Enter Student name: "<<endl;
            cin >> name;
        }
};

int main(){
    Student std;
    ofstream file("student.txt");

    std.getDetails();
    file.write((char *)&std , sizeof(std));
    cout<<"Written to file successfully";
    file.close();
    return 0;
}