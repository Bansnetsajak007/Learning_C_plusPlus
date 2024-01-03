/*
    WAP to find transpose of 3x3 matrix  using OOPS algorithm by writing seperate function for input Calculate
    and matrixDisplay. 
*/

#include <iostream>

class Matrix {
private:
    int rows;
    int cols;
    int data[3][3];

public:
    // Function to take input for the matrix
    void inputMatrix() {
        rows = 3;
        cols = 3;

        std::cout << "Enter elements of the 3x3 matrix:" << std::endl;
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                std::cin >> data[i][j];
    }

    // Function to calculate the transpose of the matrix
    Matrix calculateTranspose() const {
        Matrix transpose;
        transpose.rows = cols;
        transpose.cols = rows;

        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                transpose.data[j][i] = data[i][j];

        return transpose;
    }

    // Function to display the matrix
    void displayMatrix() const {
        std::cout << "Matrix:" << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j)
                std::cout << data[i][j] << " ";
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix matrix;

    // Input matrix
    matrix.inputMatrix();

    // Display original matrix
    std::cout << "Original ";
    matrix.displayMatrix();

    // Calculate and display the transpose
    Matrix transpose = matrix.calculateTranspose();
    std::cout << "Transpose ";
    transpose.displayMatrix();

    return 0;
}
