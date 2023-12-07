#include<iostream>

using namespace std;

void displayArray(const int arr[], int size) {
    cout << "Current array contents: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void chill(char a, int arr[], int& size) {
    int pos;

    switch (a) {
    case 'a':
        cout << "Element deletion\n";
        cout << "Enter the value number you want to delete: ";
        cin >> pos;

        if (pos > size || pos <= 0) {
            cout << "Invalid input\n";
        } else {
            --pos;
            
            // Display the number to be deleted
            cout << "Deleting value: " << arr[pos] << endl;

            // Perform deletion and update array size
            for (int i = pos; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }
            size--;
        }
        break;
    case 'b':
        cout << "Enter element to insert\n";
        cout << "Input " << size << " numbers\n";
        for (int i = 0; i < size; i++) {
            cout << "value " << i + 1 << ": ";
            cin >> arr[i];
        }
        break;
    }
}

int main(void) {
    const int maxSize = 10;
    int arr[maxSize];
    int size = 0; // Initial array size

    char choice;
    do {
        displayArray(arr, size); // Display the current array contents
        cout << "[a] Delete element value" << endl;
        cout << "[b] Insert element value" << endl;
        cout << "[c] End program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        chill(choice, arr, size);
    } while (choice != 'c');

    return 0;
}
