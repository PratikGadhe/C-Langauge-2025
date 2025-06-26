/*
Write a program to print out ASCII chart on a single screen (all 256 characters from 0 to 255) in a tabular form.
The ASCII code should be followed by the corresponding character in C language
*/
#include <stdio.h>

int main() {
    int i;

    printf("ASCII Chart (0 to 255)\n");
    printf("-----------------------\n");

    // Print ASCII table in tabular format (e.g. 4 columns)
    for(i = 0; i <= 255; i++) {
        // Print ASCII value and corresponding character
        printf("%3d = %c\t", i, i);

        // Print 4 entries per line
        if ((i + 1) % 4 == 0)
            printf("\n");
    }

    return 0;
}
