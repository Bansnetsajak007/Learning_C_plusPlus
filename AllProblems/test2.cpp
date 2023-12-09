#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class employee{
    int id;
    string name;
    float salary;
    public:
    void readData(int n)
    {
        cout<<"Enter id :";
        cin>>id;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter salary: ";
        cin>>salary;
    }

        void displayData() {
            cout<<"ID: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};

int main()
{
    employee emp[5];
    int i;
    for (int i = 0; i < 5; i++)

    {
        emp[i].readData(i);
        
    }
    cout<<"\n*****Reading employee records*****\n";
    cout<<"ID"<<"\t"<<"Name"<<"\t"<<"Salary"<<endl;
    for (int i = 0; i < 5; i++)
    {
        emp[i].displayData();
    }
    return 0;
}