#include<iostream>
#include<string>
#include<cctype>
#include<typeinfo>

using namespace std; 

string extractdigit(string base) {
    string number ;

    for(char ch : base) {
        if(isdigit(ch)) {
            number  += ch;
        }
    }

    return number;
}

char extractAlpha(string base) {
    char alpha;

    for(char ch : base) {
        if(isalpha(ch)) {
            alpha += ch;
    }
}
    return alpha;
}

// only power rule
void derivative(string base , int baseNum , int power, char variable) { 
    int tempPower = power;
    if (power > 1) {
        int finalNum = baseNum * power;
        power -= 1;
        cout<<"the derivative of "<<base <<" "<< "with the power " <<tempPower<< ": "<<"\n";
        cout<<finalNum <<variable<<" " <<"With power "<<power<<"\n";

    } else {
        int res = stoi(extractdigit(base));
        cout<<"the derivative of "<<base<< "with" <<power<< ": "<<"\n";
        cout<<res<<"\n";
    }
}

int main(){
    string base;
    int power;
    cout<<"Enter base of expression or function: ";
    cin >> base;
    cout<<"Enter power of expression: ";
    cin >> power;
    
    string baseNum =  extractdigit(base);
    int digitFromBase = stoi(baseNum);
    char alpha = extractAlpha(base);
    cout<<alpha<<"\n";

    derivative(base, digitFromBase, power, alpha);


    return 0;
}