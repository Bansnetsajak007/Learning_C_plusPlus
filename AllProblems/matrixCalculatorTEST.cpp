#include <iostream>

using namespace std;

class Matrix {
private:
    int rows;
    int columns;
    int** data;

public:
    Matrix(int rows, int columns) {
        this->rows = rows;
        this->columns = columns;

        // Allocate memory for the matrix
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[columns];
        }
    }

    void inputMatrix() {
        cout << "Enter matrix elements:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << "Enter element at position " << i + 1 << "," << j + 1 << ": ";
                cin >> data[i][j];
            }
        }
    }

    void displayMatrix() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << data[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // method to multiply matrix
    Matrix multiply(Matrix& other) {
        Matrix result(rows, other.columns);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.columns; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < columns; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    // Destructor to free allocated memory
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
};

int main() {
    int rowFirst, colFirst, rowSecond, colSecond;

    cout << "Enter the number of rows and columns for the first matrix:" << endl;
    cin >> rowFirst >> colFirst;

    cout << "Enter the number of rows and columns for the second matrix:" << endl;
    cin >> rowSecond >> colSecond;

    // main condition of matrix multiplication (MxN x NxP ----> MxP)
    if (colFirst != rowSecond) {
        cout << "Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix." << endl;
        return 1; // Exit with an error code
    }

    Matrix matrix1(rowFirst, colFirst);
    Matrix matrix2(rowSecond, colSecond);

    matrix1.inputMatrix();
    matrix2.inputMatrix();

    cout << "First ";
    matrix1.displayMatrix();
    cout << "Second ";
    matrix2.displayMatrix();

    Matrix result = matrix1.multiply(matrix2);

    cout << "Result ";
    result.displayMatrix();

    return 0;
}
