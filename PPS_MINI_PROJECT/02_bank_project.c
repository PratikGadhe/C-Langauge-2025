#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3];
    int sum[3][3], diff[3][3];

    // Input for Matrix 1
    printf("Enter elements of Matrix 1 (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for Matrix 2
    printf("\nEnter elements of Matrix 2 (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform Addition and Subtraction
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Display Result
    printf("\nAddition of two matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction of two matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
