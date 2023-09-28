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

//mainInitializes main matrix from equation
void mainInitialize(int matrix [3][3]){
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0 ; j < 3; j++){
            cout <<"Enter value at "<<i <<j <<" : ";
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


void includeconstantInFirst(int matrix[3][3], int cMAtrix[3]) {
    int j = 0;
    for (int i = 0; i < 3; i++)
    {
        matrix [i][j] = cMAtrix[i];
    }
    
}

void includeconstantInSecond(int matrix[3][3], int cMAtrix[3]) {
    int j = 1;
    for (int i = 0; i < 3; i++)
    {
        matrix [i][j] = cMAtrix[i];
    }
    
}

void includeconstantInThird(int matrix[3][3], int cMAtrix[3]) {
    int j = 2;
    for (int i = 0; i < 3; i++)
    {
        matrix [i][j] = cMAtrix[i];
    }
    
}


void copyMatrix(int source[3][3], int dest[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            source[i][j] = dest[i][j];
        }
        
    }
    
}

void displayMatrix(int matrix [3][3]) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
}


int main() {
    int originalMatrix[3][3];
    int mainMatrix[3][3];
    int firstMatrix[3][3];
    int secondMatrix[3][3];
    int thirdMatrix[3][3];

    int constantValues[3];

    cout <<"Initializing the main matrix: " <<endl;
    mainInitialize(mainMatrix);

    copyMatrix(originalMatrix,mainMatrix);
    copyMatrix(firstMatrix,mainMatrix);
    copyMatrix(secondMatrix,mainMatrix);
    copyMatrix(thirdMatrix,mainMatrix);

    displayMatrix(firstMatrix);

    // constantarray(constantValues);
    
    // includeconstantInFirst(mainMatrix,constantValues);
    // // displayMatrix(mainMatrix);
    // copyMatrix(firstMatrix,mainMatrix);
    // cout <<"The determinant of first matrix is " <<determinant3x3(firstMatrix) <<endl;

    // includeconstantInSecond(mainMatrix,constantValues);
    // // displayMatrix(mainMatrix);
    // copyMatrix(secondMatrix,mainMatrix);
    // cout <<"The determinant of second matrix is " <<determinant3x3(secondMatrix) <<endl;

    // includeconstantInThird(mainMatrix,constantValues);
    // copyMatrix(thirdMatrix,mainMatrix);
    // cout <<"The determinant of third matrix is " <<determinant3x3(thirdMatrix) <<endl;
    


    cout <<"completed";

    return 0;
}