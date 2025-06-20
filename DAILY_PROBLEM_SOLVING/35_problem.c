// Write a program to print following outputs in C language
/*
1
12
123
1234
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }printf("\n");
    }
    return 0;
}