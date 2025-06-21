// Write a program to print following outputs in C language (imp)
/*
1
11
121
1231
12341
123451
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        printf("1");  // Every row starts with 1
        
        for (int j = 2; j < i; j++) {  // Printing increasing numbers in the middle
            printf("%d", j);
        }
        
        if (i > 1) {  // Every row except the first ends with 1
            printf("1");
        }
    
        printf("\n"); // Move to the next line
    }
    return 0;
}