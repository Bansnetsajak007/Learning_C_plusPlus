#include<iostream>
#include<string>

using namespace std;

class Students{
    private:
        string name;
        int age;

    public:

        //default constructor
        Students(): age(0) {}

        //parameteried constructors
        Students(const string& n, int a) : name(n), age(a) {}

        //getters methods const is used inorder to make sure that the value returned is not modified
        string get_name() const {
            return name;
        }

        int get_age() const{
            return age;
        }

        void display_details(){
            cout<<"Name: " <<name <<"Age: " <<age <<endl;
        }
};

int main(){
   const int maxlen = 3;
    Students std[maxlen]; // creating array of objects

    for (int i = 0; i < maxlen; ++i){

        string name;
        int age;

        cout << "Enter the name for student" <<i+1 << " : ";
        getline(cin, name);

        cout << "Enter the age for student" <<i+1<< " : ";
        cin >> age;
        cin.ignore();

        std[i] = Students(name,age);
    }


        for (int i = 0; i < maxlen; ++i) {
        std::cout << "Student " << i + 1 << " - ";
        std[i].display_details ();
    }
    
    return 0;
}
