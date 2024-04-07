//Reading a file using ios::in mode
#include <fstream>
#include <iostream>
#include<string>
using namespace std;
int main() {
ifstream file;
file.open("z1.txt", ios::in);
if (!file.is_open()) {
cerr << "Failed to open file" << endl;
return 1;
}
string line;
while (getline(file, line)) {
cout << line << endl;
}
file.close();
return 0;
}