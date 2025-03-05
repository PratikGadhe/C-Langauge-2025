/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/
#include <stdio.h>

int main() {
    int n = 4; // Maximum number at the edges
    int size = 2 * n - 1; // Size of the square matrix
    int arr[size][size];
    
    // Filling the array
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int min = i < j ? i : j;
            min = min < size - i ? min : size - i - 1;
            min = min < size - j - 1 ? min : size - j - 1;
            arr[i][j] = n - min;
        }
    }
    
    // Printing the pattern
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
