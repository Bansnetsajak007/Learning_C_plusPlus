/*
     Write a program according to the specification given below:

    - Create a class Account with data members acc no, balance, and min_balance(static)

    - Include methods for reading and displaying values of objects

    - Define static member function to display min_balance

    -Create array of objects to store data of 5 accounts and read and display values of each object
*/


#include<iostream>
#include<string>

using namespace std;

class Account{
    private:
        int acc_no;
        double balance;
        static double minBalance;
    
    public:
        void read_data(){
            cout<<"Enter Account Number: ";
            cin >> acc_no;

            cout<<"Enter Balance:  ";
            cin >> balance;
                }

         void displayData() {
            cout << "Account Number: " << acc_no << std::endl;
            cout << "Balance: " << balance << std::endl;
            }

        static void displayMinBalance() {
            cout << "Minimum Balance: " << minBalance << endl;
    }
};

// using scope resoulution operator to initialize to value of static data member;
double Account::minBalance = 100.0;

int main(){

    Account accounts[5];

    for(int i = 0 ; i <= 5 ; i++){
        cout<< "Enter Details of Account" <<i+1 <<endl;
        accounts[i].read_data();
        cout <<endl;
    }

    cout << "Account Details:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Account " << i + 1 << ":" << endl;
        accounts[i].displayData();
        cout << endl;
    }

    Account::displayMinBalance();

    return 0;
}

