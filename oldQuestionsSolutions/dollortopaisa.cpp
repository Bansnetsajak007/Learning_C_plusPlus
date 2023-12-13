/*
 Create two classes rupee and dollar respectively.
 Write conversion operators to convert between rupee and dollar assuming that 1 dollar equals 133
 rupees. Write a main() program that allows the user to enter an amount in either currency 
 and then converts it to other currency and display the result!!!
*/

#include <iostream>
using namespace std;


class Dollar;

class Rupee {
private:
    double amount;

public:
    Rupee(double amt) : amount(amt) {}

    operator Dollar() const; 

    void display() const {
        cout << amount << " Rupees";
    }
};

class Dollar {
private:
    double amount;

public:
    Dollar(double amt) : amount(amt) {}

    operator Rupee() const; 
    void display() const 
    {
        cout << amount << " Dollars";
    }
};
Rupee::operator Dollar() const 
{
    return Dollar(amount / 133.0);//  to convert in rupees
}
Dollar::operator Rupee() const 
{
    return Rupee(amount * 133.0); // to convert into dollar
}

int main() {
    double amount;
    char currency;

    cout << "Enter the amount: ";
    cin >> amount;

    cout << "Enter the currency (R for Rupees, D for Dollars): ";
    cin >> currency;

    if (currency == 'R' || currency == 'r') {
        Rupee rupeeAmount = amount;
        Dollar dollarAmount = rupeeAmount;

        cout << "Converted amount: ";
       
        dollarAmount.display();

         cout<<endl;
    } else if (currency == 'D' || currency == 'd') {
        Dollar dollarAmount = amount;
        Rupee rupeeAmount = dollarAmount;

        cout << "Converted amount: ";
        
        rupeeAmount.display();

        cout<<endl;
    } else {
        cout << "Invalid currency input." ;
    }
 cout <<endl;
    return 0;
}