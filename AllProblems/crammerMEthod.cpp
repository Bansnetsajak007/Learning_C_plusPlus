#include<iostream>
#include<stdio.h>

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

    float D,D_1,D_2,D_3;
    int x,y,z;

    cout <<"Initializing the main matrix: " <<endl;
    mainInitialize(mainMatrix);

    copyMatrix(originalMatrix,mainMatrix);
    copyMatrix(firstMatrix,mainMatrix);
    copyMatrix(secondMatrix,mainMatrix);
    copyMatrix(thirdMatrix,mainMatrix);

    constantarray(constantValues);
    
    D = determinant3x3(originalMatrix);

    copyMatrix(firstMatrix,mainMatrix);
    includeconstantInFirst(firstMatrix,constantValues);
    D_1 = determinant3x3(firstMatrix);

    copyMatrix(secondMatrix,mainMatrix);
    includeconstantInSecond(secondMatrix,constantValues);
    D_2 = determinant3x3(secondMatrix);

    copyMatrix(thirdMatrix,mainMatrix);
    includeconstantInThird(thirdMatrix,constantValues);
    D_3 = determinant3x3(thirdMatrix);

    x = (D_1 / D);
    y = (D_2 / D);
    z = (D_3 / D);


    // cout << "X = " << x <<endl;
    // cout << "Y = " << y <<endl;
    // cout << "Z = " << z <<endl;

    printf("X = %d\n", x);
    printf("Y = %d\n", y);
    printf("Z = %d\n", z);


    return 0;
}