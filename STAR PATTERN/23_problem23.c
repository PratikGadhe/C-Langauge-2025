/*
1
11
121
1231
12341
123451
*/
#include <stdio.h>
void print4(int n){
    for (int i = 1; i <= n; i++) {  // Number of rows
        printf("1");  // Every row starts with 1
        
        for (int j = 2; j < i; j++) {  // Printing increasing numbers in the middle
            printf("%d", j);
        }
        
        if (i > 1) {  // Every row except the first ends with 1
            printf("1");
        }
    
        printf("\n"); // Move to the next line
    }
}
int main() {
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    print4(n);
    return 0;
}