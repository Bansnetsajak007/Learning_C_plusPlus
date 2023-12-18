//Program to accept student details and print the third record

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Student{
public:
    int roll;
    string name;
    string address;
    long int phone;    
    void getInfo()
    {
        cout<<"Enter Roll:";
        cin>>roll;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter address:";
        cin>>address;
        cout<<"Enter Phone:";
        cin>>phone;
    }
};
int main()
{
    Student obj;
    int count=0;
    string data;
    obj.getInfo();
    ofstream fp("myfile.txt",ios::app);
    fp<<obj.roll<<" "<<obj.name<<" "<<obj.address<<" "<<obj.phone<<endl;
    cout<<"Data successfully Added";
   
    ifstream input("myfile.txt",ios::in);
    cout<<"\nThird Record"<<endl;
    while(getline(input,data))
    {
        count++;
        if(count==3)
        {
            cout<<data;
        }
    }
    input.close();
    fp.close();
    return 0;
}