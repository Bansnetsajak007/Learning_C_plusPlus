/*
    In C++, a "friend function" is a special type of function that is not a member of a class but is allowed to access 
    the private and protected members (variables and functions) of that class. It's like giving special 
    permission to a function to access the inner workings of a class, even though it's not part of that class.


    Imagine you have a class with some private data, and normally, 
    other functions outside the class can't access that private data directly. 
    However, if you declare a function as a "friend" of that class, 
    it's like making that function an unofficial member of the class. 
    This function can now access and manipulate the class's private data as if it were part of the class itself.

    Friend functions can be useful in situations where you need to perform operations that involve 
    the internal details of a class but don't want to make those details public for the world to see. 
    They provide a way to maintain encapsulation (hiding the internal details) while still allowing certain 
    trusted functions to work with those details.

    features of friend functions

        1. Access to Private Members: Friend functions can access private and protected members of a class.

        2. Non-Member Function: Friend functions are not members of a class but are declared within the class using the `friend` keyword.

        3. Bi-directional Access: Friend functions provide bi-directional access, allowing them to access private members of another class and vice versa.

        4. Flexibility in Design: Friend functions enhance design flexibility by enabling external functions to interact with class internals without being members of the class.

        5. Declared Outside the Class: Friend functions are declared outside the class definition, promoting a clear separation between member functions and friend functions in the program structure.


    disadvantages of friend functions


    1. Reduced Encapsulation: Friend functions can compromise class encapsulation by accessing private members.

    2. Global Visibility: Friend functions, often declared outside the class, increase visibility globally.

    3. Complexity and Maintenance: The use of many friend functions can lead to complex and less maintainable code.

    4. Security Concerns: Granting external functions access to private members may raise security concerns.

    5. Violation of Information Hiding: Friend functions can potentially violate the principle of information hiding.

*/


// #include<iostream>

// using namespace std;

// class Second ; //Decleration of class

// class First{
//     private:
//         int number;
    
//     public:
//         First() : number(5) {}
    
//         friend int multiply(First,Second);
// };

// class Second{
//     private:
//         int number;
    
//     public:
//         Second() : number(6) {}

//         friend int multiply(First,Second);
// };

// int multiply(First num1 , Second num2){
//     return (num1.number * num2.number);
// }

// int main(){
//     First obj1;
//     Second obj2;

//     cout<< "The product is " <<multiply(obj1,obj2) <<endl;
//     return 0;
// }


#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;

public:
    Matrix(int rows, int cols) : data(rows, std::vector<int>(cols, 0)) {}

    void fillMatrix() {
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data[i].size(); ++j) {
                std::cout << "Enter element at row " << i + 1 << " and column " << j + 1 << ": ";
                std::cin >> data[i][j];
            }
        }
    }

    void displayMatrix() {
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data[i].size(); ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    // Declare the friend function for overloading the + operator (should be decleared inside the class)
    friend Matrix operator+(const Matrix& mat1, const Matrix& mat2);
};

// Define the friend function to add two matrices
Matrix operator+(const Matrix& mat1, const Matrix& mat2) {
    if (mat1.data.size() != mat2.data.size() || mat1.data[0].size() != mat2.data[0].size()) {
        std::cerr << "Matrix addition is not possible. Matrices must have the same dimensions." << std::endl;
        return Matrix(0, 0);
    }

    Matrix result(mat1.data.size(), mat1.data[0].size());

    for (size_t i = 0; i < mat1.data.size(); ++i) {
        for (size_t j = 0; j < mat1.data[i].size(); ++j) {
            result.data[i][j] = mat1.data[i][j] + mat2.data[i][j];
        }
    }

    return result;
}

int main() {
    int rows, cols;

    std::cout << "Enter the number of rows for matrices: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns for matrices: ";
    std::cin >> cols;

    //object creation
    Matrix matrix1(rows, cols);
    Matrix matrix2(rows, cols);

    std::cout << "Enter elements for the first matrix:" << std::endl;
    matrix1.fillMatrix();

    std::cout << "Enter elements for the second matrix:" << std::endl;
    matrix2.fillMatrix();

    std::cout << "First matrix:" << std::endl;
    matrix1.displayMatrix();

    std::cout << "Second matrix:" << std::endl;
    matrix2.displayMatrix();

    // Use the overloaded + operator to add two matrices
    Matrix sum = matrix1 + matrix2;

    std::cout << "Sum of the matrices:" << std::endl;
    sum.displayMatrix();

    return 0;
}
