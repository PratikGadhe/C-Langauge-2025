/*
    print this pattern :

        *****
        *****
        *****
        *****

*/

#include <stdio.h>

int main() {
    int rows = 4;  // Number of rows
    int cols = 5;  // Number of columns

    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < cols; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    for (int i = 0 ; i<rows;i++){
        for(int j = 0;j < cols;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
