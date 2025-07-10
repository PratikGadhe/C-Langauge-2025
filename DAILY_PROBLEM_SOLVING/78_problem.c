//Write a program to accept two M x N matrices and add them in C language
#include <stdio.h>
int main(){
    int m,n;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of columns : ");
    scanf("%d",&n);
    int A[m][n];
    int B[m][n];
    int sum[m][n];
    //inputing A matrix 
    printf("Enter Element for Matrix A : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter Element[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //inputing B matrix 
    printf("Enter Element for Matrix B : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter Element[%d][%d]: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("Sum of Matrix A and Matrix B is \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum[i][j]=A[i][j]+B[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",sum[i][j]);
        }printf("\n");
    }
    return 0;
}