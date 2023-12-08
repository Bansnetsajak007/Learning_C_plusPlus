/*
    Manipulators are basically the special type of functions in c++ which is used 
    to modify the behavior of the output stream (usually cout) 

    Mainly used for proper formatting of the output

    Manipulators are typically used with the insertion (<<) operator to modify the way data is presented. 
    They are defined in the <iomanip> header
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double pi = 3.14159265;
    int number = 55;

    cout<<fixed <<setprecision(2);
    cout << "PI = " <<pi <<endl;  // PI = 3.14

    //setw() creates space and setfill() fill those spaces
    cout<< "Number : " <<setw(5)<<setfill('0') <<number;  //Number : 00055


    return 0;
}