// #include <fstream>
// #include <iostream>
// using namespace std;
// int main() {
// ofstream file;
// file.open("z1.txt", ios::out);
// if (file.is_open()) {
// const char message[] = "Writing to a file in C++ is easy!";
// file.write(message, sizeof(message));
// cout<<"File Successfuly created!";
// file.close();
// } else {
// cerr << "Unable to open file" << endl;
// }
// return 0;
// }

// #include <fstream>
// #include <iostream>
// using namespace std;
// int main() {
// ofstream file;
// file.open("z1.txt", ios::app);
// if (file.is_open()) {

// file << "This text will be added at the end of file!" << endl;
// cout<<"operation successful!";
// file.close();
// } else {
// cerr << "Unable to open file" << endl;
// }
// return 0;
// }

#include <fstream>
#include <iostream>
using namespace std;
int main() {
ofstream file;
file.open("z1.txt", ios::trunc);
if (file.is_open()) {
file << " This is the new content after truncating the previous " << endl;
file.close();
} else {
cerr << "Unable to open file" << endl;
}
return 0;
}