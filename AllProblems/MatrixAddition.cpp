#include<iostream>
#include<vector>

using namespace std;

class Matrix{
    private:
        int row1,col1,row2,col2;
        vector<vector<int>> array1;
        vector<vector<int>> array2;
        vector<vector<int>> result;
    
    public:
        Matrix(int r1 , int c1 , int r2 , int c2) : row1(r1) , col1(c1) , row2(r2) , col2(c2) {
            array1.resize(row1, vector<int>(col1));
            array2.resize(row2, vector<int>(col2));
            result.resize(row1, vector<int>(col1));
        }

    inline void test () {
        if(row1 == row2 && col1==col2){
            calculate();
        } else{
            cout<<"Cant Perform calculation" <<endl;
        }
    }

    void calculate(){
        int i,j;
        cout<<"Enter elements in first matrix" <<endl;
        for(i = 0 ; i < row1 ; ++i){
            for(j = 0 ; j < col1 ; ++j){
                cin >> array1 [i][j];
            }
        }
        cout<<"Enter elements in second matrix" <<endl;
        for(i = 0 ; i < row2 ; ++i){
            for(j = 0 ; j < col2 ; ++j){
                cin >> array2 [i][j];
            }
        }

        // cout<< "Additon of the two matrx are: " <<endl;
        for(i = 0 ; i < row1 ; ++i){
            for(j = 0 ; j < col1 ; ++j){
                result [i][j] =  array1 [i][j] + array2[i][j];
            }
        }
        cout<< "Additon of the two matrx are: " <<endl;
        for(i = 0 ; i < row1 ; ++i){
            for(j = 0 ; j < col1 ; ++j){
                cout << result[i][j] << " ";
            }
            cout<< endl;
        }
    }
};

int main(){
    Matrix first(2,2,2,2);
    first.test();
    return 0;
}