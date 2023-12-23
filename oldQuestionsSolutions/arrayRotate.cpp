//WAP to rotate an array of integers to the left by a given number of positions.

#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateLeft(int arr[], int size, int positions) {
    positions = positions % size;  // Adjust positions if it's greater than the array size

    // Reverse the first 'positions' elements
    reverse(arr, 0, positions - 1);

    // Reverse the remaining elements
    reverse(arr, positions, size - 1);

    // Reverse the entire array
    reverse(arr, 0, size - 1);
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int positions;
    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &positions);

    rotateLeft(myArray, size, positions);

    printf("Array after rotating left by %d positions: ", positions);
    displayArray(myArray, size);

    return 0;
}
