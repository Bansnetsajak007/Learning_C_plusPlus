/*
    Wap to create a class employee with data members (id,name address) and perform the following operation
    1. Enter the data of 5 employees
    2.Store in file
    3. display details in appropriate format
*/


#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Employee{
    private:
        int id;
        string Name , address;

    public:
        Employee(int id , string name , string address) : id(id) , Name(name) , address(address) {}


        // void displayFormat() {
        //     cout <<"Details of the Employee" <<endl;
        //     cout <<"_______________________"<<endl;
        //     cout <<"id\t" <<"Name\t" <<"Address\t"<<endl;
        //     cout <<endl;
        // }

        //displays on the console
        void display() {
            cout<<id <<"\t" <<Name <<"\t" <<address <<"\t";
        }

        void writeToFile(ofstream& outputFile) {
            outputFile <<id <<"\t" <<Name <<"\t" <<address <<"\t" <<endl;
        }
};
    
int main(){

    const int nEmployees = 3;

    Employee employee[nEmployees] = {
            Employee (1,"Hari", "Birtamode"),
            Employee (2,"Ram", "Birtamode"),
            Employee (3,"gita", "Kathmandu"),
    };

    // employee->displayFormat();

    ofstream outputFile("employee_details.txt");                 

    if(outputFile.is_open()) {

        for(int i = 0 ; i < nEmployees ; i++) {
            employee[i].display();
            employee[i].writeToFile(outputFile);
            cout<<endl;
        }

        outputFile.close();
        cout<<"Data written to file successfully";

    } else {
        cout <<"successfully failed";
    }
    return 0; 
}