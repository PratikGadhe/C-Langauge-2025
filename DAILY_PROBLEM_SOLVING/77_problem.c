//Write a program to accept a mXn matrix and reprint it in matrix form in C language
#include <stdio.h>
int main(){
    int m,n;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of columns : ");
    scanf("%d",&n);
    int array[m][n];
    printf("Enter Elements : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter Element[%d][%d] : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }printf("\n");
    printf("--- matrix form ---\n");
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",array[i][j]);
        }printf("\n");
    }
    return 0;
}