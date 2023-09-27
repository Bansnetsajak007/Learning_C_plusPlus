#include<iostream>

using namespace std;

int determinant2x2(int matrix[2][2]){
    return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
}

int determinant3x3(int matrix[3][3]){
    int det = 0;

    if(matrix[0][0] != 0){
        int submatrix[2][2];

        for(int i = 1 ; i < 3 ; ++i){
            for(int j = 1 ; j < 3 ; ++j){
                submatrix[i - 1][j - 1] = matrix[i][j];
            }
        }

        det += matrix[0][0] * determinant2x2(submatrix);
    }

    if (matrix[0][1] != 0) {
        int submatrix[2][2];

        for (int i = 1; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (j != 1) {
                    submatrix[i - 1][j - (j > 1 ? 1 : 0)] = matrix[i][j];
                }
            }
        }

        det -= matrix[0][1] * determinant2x2(submatrix);
    }

     if (matrix[0][2] != 0) {
        int submatrix[2][2];

        for (int i = 1; i < 3; ++i) {
            for (int j = 0; j < 2; ++j) {
                submatrix[i - 1][j] = matrix[i][j];
            }
        }

        det += matrix[0][2] * determinant2x2(submatrix);
    }
    return det;
}

void initialize(int matrix [3][3]){
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0 ; j < 3; j++){
            cout <<"Enter value at "<<i <<j <<": ";
            cin >> matrix[i][j];
        }
    }
    
}

void constantarray(int constant[3]){
    for (int i = 0; i < 3; i++)
    {
        cout <<"Enter constant at "<< i << ":";
        cin >> constant[i];
    }
    
}

void printMatrix(int array[3]) {
    for (int i = 0; i < 3; i++)
    {
        cout << array[i] <<endl;
    }
    
}



int main() {
    int mainMatrix[3][3];
    int constantValues[3];

    initialize(mainMatrix);
    constantarray(constantValues);

    cout <<"The determinant of matrix is: "<<determinant3x3(mainMatrix);
    

    return 0;
}