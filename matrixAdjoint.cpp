#include <iostream>

const int MAX_SIZE = 10;

// Function to calculate the determinant of a submatrix
int determinant(int matrix[MAX_SIZE][MAX_SIZE], int size);

// Function to calculate the cofactor matrix of a given element
void cofactor(int matrix[MAX_SIZE][MAX_SIZE], int temp[MAX_SIZE][MAX_SIZE], int row, int col, int size);

// Function to calculate the adjoint of a matrix
void adjoint(int matrix[MAX_SIZE][MAX_SIZE], int adj[MAX_SIZE][MAX_SIZE], int size);

// Function to display a matrix
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size);

int main() {
    int size;

    std::cout << "Enter the size of the square matrix: ";
    std::cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        std::cout << "Invalid matrix size." << std::endl;
        return 1;
    }

    int matrix[MAX_SIZE][MAX_SIZE];
    int adj[MAX_SIZE][MAX_SIZE];

    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    adjoint(matrix, adj, size);

    std::cout << "Adjoint of the matrix:" << std::endl;
    displayMatrix(adj, size);

    return 0;
}



int determinant(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    if (size == 1) {
        return matrix[0][0];
    }

    int det = 0;
    int sign = 1;
    int temp[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < size; ++i) {
        cofactor(matrix, temp, 0, i, size);
        det += sign * matrix[0][i] * determinant(temp, size - 1);
        sign = -sign;
    }

    return det;
}

void cofactor(int matrix[MAX_SIZE][MAX_SIZE], int temp[MAX_SIZE][MAX_SIZE], int row, int col, int size) {
    int i = 0, j = 0;
    for (int x = 0; x < size; ++x) {
        for (int y = 0; y < size; ++y) {
            if (x != row && y != col) {
                temp[i][j++] = matrix[x][y];
                if (j == size - 1) {
                    j = 0;
                    ++i;
                }
            }
        }
    }
}

void adjoint(int matrix[MAX_SIZE][MAX_SIZE], int adj[MAX_SIZE][MAX_SIZE], int size) {
    if (size == 1) {
        adj[0][0] = 1;
        return;
    }

    int sign = 1;
    int temp[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cofactor(matrix, temp, i, j, size);
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = sign * determinant(temp, size - 1);
        }
    }
}

void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}




