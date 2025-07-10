//Write a program to accept a M x N matrix and print addition of lower triangular matrix elements in C language
#include <stdio.h>
int main(){
    int m,n;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of columns : ");
    scanf("%d",&n);
    int array[m][n];
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter element[%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);
            if(j<=i){
                sum+=array[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",array[i][j]);
        }printf("\n");
    }
    printf("Sum of upper triangular matrix is %d\n",sum);
    return 0;
}