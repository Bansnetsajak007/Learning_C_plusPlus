//Program to count number of words in line of text

#include<iostream>
#include<string>

//header file in C++ provides facilities for working with input and output string streams
#include <sstream>

using namespace std;

class WordCount{
    private:
        string text;

    public:
        //constructor function
        WordCount(const string& input_text):text(input_text) {}

        int count(){
        istringstream iss(text);
        int wordCount = 0;
        string word;

        while (iss >> word) {
            wordCount++;
        }

        return wordCount;
        }

};


int main(){
    string input_line;

    cout<<"Enter a line of text: ";
    getline(cin,input_line);

    WordCount counter(input_line);
    int result = counter.count();

    cout<<"The total number of words is "<<result;
    return 0;
}

