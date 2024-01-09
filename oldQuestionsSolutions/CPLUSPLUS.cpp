#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Test
{
public:
    void writeToFile() {
        bool flag = false;
        // string code = "print(\"Hello World From C++\")";
        string code = R"(
        #include <iostream>
        
        int main() {
            std::cout << "Hello World" << std::endl;
            return 0;
        }
    )";
        ofstream out("CPLUSPLUSvia.cpp");

        if(out.is_open()) flag = true;

        if(flag) {
        out << code <<"\n";
        }
        out.close();
    }
};

int main() {

    Test test;
    test.writeToFile();

    return 0;
}