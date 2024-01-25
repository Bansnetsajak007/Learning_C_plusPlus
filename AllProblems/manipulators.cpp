/*
    Manipulators are basically the special type of functions in c++ which is used 
    to modify the behavior of the output stream (usually cout) 

    Mainly used for proper formatting of the output

    Manipulators are typically used with the insertion (<<) operator to modify the way data is presented. 
    They are defined in the <iomanip> header
*/


// in detail explanation about manipulators
/*
In C++, manipulators are used to format or modify the behavior of input and output streams. They are often used with the `iostream` objects like `cin` and `cout`. Here are some commonly used manipulators:

1. **setw(int n):**  
   - Sets the width of the field in which the next output will be displayed.
   ```cpp
   #include <iostream>
   #include <iomanip>

   int main() {
       int num = 42;
       std::cout << std::setw(5) << num << std::endl; // Output: "   42"
       return 0;
   }
   ```

2. **setprecision(int n):**  
   - Sets the decimal precision to be used to format floating-point values.
   ```cpp
   #include <iostream>
   #include <iomanip>

   int main() {
       double value = 3.14159;
       std::cout << std::setprecision(2) << value << std::endl; // Output: "3.14"
       return 0;
   }
   ```

3. **setfill(char c):**  
   - Sets the fill character used to pad the field to a specified width.
   ```cpp
   #include <iostream>
   #include <iomanip>

   int main() {
       int num = 42;
       std::cout << std::setw(5) << std::setfill('*') << num << std::endl; // Output: "**42"
       return 0;
   }
   ```

4. **left, right, and internal:**  
   - Specifies the justification of the output within a field (left, right, or internal).
   ```cpp
   #include <iostream>
   #include <iomanip>

   int main() {
       int num = 42;
       std::cout << std::setw(5) << std::setfill('*') << std::left << num << std::endl; // Output: "42***"
       std::cout << std::setw(5) << std::setfill('*') << std::right << num << std::endl; // Output: "***42"
       return 0;
   }
   ```

5. **boolalpha and noboolalpha:**  
   - Converts between integer and boolean representations.
   ```cpp
   #include <iostream>
   #include <iomanip>

   int main() {
       bool flag = true;
       std::cout << std::boolalpha << flag << std::endl; // Output: "true"
       std::cout << std::noboolalpha << flag << std::endl; // Output: "1"
       return 0;
   }
   ```

6. **hex, dec, oct:**  
   - Sets the base in which integer values are displayed (hexadecimal, decimal, or octal).
   ```cpp
   #include <iostream>
   #include <iomanip>

   int main() {
       int num = 42;
       std::cout << std::hex << num << std::endl; // Output: "2a"
       std::cout << std::dec << num << std::endl; // Output: "42"
       std::cout << std::oct << num << std::endl; // Output: "52"
       return 0;
   }
   ```

These manipulators can be combined and used in various ways to control the formatting of output in C++ programs.
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