// i will definatly write this code

#include <iostream>
#include <vector>

using namespace std;

class Matrix
{
private:
    int R, C;

public:
    void getMatrix(int R, int c)
    {
        cout << "Enter Row of matrix: ";
        cin >> R;

        cout << "Enter column of matrix: ";
        cin >> C;

        const int rows = R;
        const int cols = C;

        vector<vector<int>> mainMatrix(R, vector<int>(C));
        // get the matrix from the user
        for (int i = 0; i < R; ++i)
        {
            for (int j = 0; j < C; ++j)
            {
                cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
                cin >> mainMatrix[i][j];
            }       
        }

        for (int i = 0; i < R; ++i)
        {
            for (int j = 0; j < C; ++j)
            {
                cout << mainMatrix[i][j] << " ";
            }
            cout << '\n';
        }
    }
};