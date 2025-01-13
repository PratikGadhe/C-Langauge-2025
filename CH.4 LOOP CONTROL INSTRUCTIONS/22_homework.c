// print this pattern :
/*

        *****
        ****
        ***
        **
        *
*/

#include <stdio.h>

int main() {
    int rows = 5;  // Number of rows

    for (int i = 1; i <= rows; i++) {  // Outer loop for rows
        for (int j = i; j <= rows; j++) {  // Inner loop for printing stars
            printf("*");
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
