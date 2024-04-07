#include <fstream>
#include <iostream>
#include <string>

struct Student {
  int id;
  std::string name;
  // Add more fields like email, grade, etc. if needed
};

int main() {
  // Define filename with .db extension
  std::string filename = "student_data.db";

  // Open the file in append mode (adds content without overwriting)
  std::ofstream outfile(filename, std::ios::app);

  if (outfile.is_open()) {
    // Create some student data
    Student student1 = {1, "Alice"};
    Student student2 = {2, "Bob"};
    // Add more students as needed

    // Write student data to the file in a structured format (e.g., CSV)
    outfile << student1.id << "," << student1.name << std::endl;
    outfile << student2.id << "," << student2.name << std::endl;
    // Add lines for more students

    std::cout << "Student data written to file successfully!" << std::endl;
  } else {
    std::cerr << "Error creating file: " << filename << std::endl;
  }

  // Close the file
  outfile.close();

  return 0;
}
