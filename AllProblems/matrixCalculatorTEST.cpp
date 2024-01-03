#include <iostream>
#include <vector>

int main() {
    int R, C;

    // Taking values from the user
    std::cout << "Enter Row of matrix: ";
    std::cin >> R;

    std::cout << "Enter column of matrix: ";
    std::cin >> C;

    // Creating a vector to represent a 2D matrix
    std::vector<std::vector<int>> mainMatrix(R, std::vector<int>(C));

    // Asking the user to input elements for the matrix
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            std::cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            std::cin >> mainMatrix[i][j];
        }
    }

    // Displaying the entered matrix
    std::cout << "Entered Matrix:\n";
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            std::cout << mainMatrix[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
