//write a c++ program to write "PURBANCHAL UNIVERSITY" on a file and read it back to display in console.

//ofstream ----> output file stream (FOR WRITING IN FILE)
//ifstream ----> input file stream (FOR READING FROM FILE)

#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Writing to a file
    std::ofstream outFile("university.txt");

    if (!outFile) {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    std::string universityName = "PURBANCHAL UNIVERSITY";
    outFile << universityName;

    // Close the file
    outFile.close();

    // Reading from the file
    std::ifstream inFile("university.txt");

    if (!inFile) {
        std::cerr << "Error opening file for reading." << std::endl;
        return 1;
    }

    // Read the entire line from the file
    std::string readText;
    std::getline(inFile, readText);

    // Close the file
    inFile.close();

    // Display the content in the console
    std::cout << "Content read from the file: " << readText << std::endl;

    return 0;
}
