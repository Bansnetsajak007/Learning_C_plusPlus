//write a programm in C++ using oops to concatenate two input strings using friend function

#include <iostream>
#include <string>

class StringConcatenator;  //forward delceration    

class StringManipulator {
private:
    std::string str;

public:
    StringManipulator(const std::string& s) : str(s) {}

    //friend function declaration
    friend StringConcatenator concatenateStrings(const StringManipulator& str1, const StringManipulator& str2);
};

class StringConcatenator {
private:
    std::string concatenatedString;

public:
    StringConcatenator(const std::string& concatenated) : concatenatedString(concatenated) {}

    void display() const {
        std::cout << "Concatenated String: " << concatenatedString << std::endl;
    }
    
    // Friend function to concatenate two strings
    friend StringConcatenator concatenateStrings(const StringManipulator& str1, const StringManipulator& str2);
};

// Friend function definition to concatenate two strings
StringConcatenator concatenateStrings(const StringManipulator& str1, const StringManipulator& str2) {
    std::string result = str1.str + str2.str;
    return StringConcatenator(result);  //creates anonymous object 
}

int main() {
    // Get input strings from the user
    std::string input1, input2;
    std::cout << "Enter the first string: ";
    std::getline(std::cin, input1);

    std::cout << "Enter the second string: ";
    std::getline(std::cin, input2);

    // Create objects of StringManipulator
    StringManipulator string1(input1);
    StringManipulator string2(input2);

    // Concatenate strings using the friend function
    StringConcatenator result = concatenateStrings(string1, string2);

    result.display();

    return 0;
}
