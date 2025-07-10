//Write a program to accept a M x N matrix and print addition of their array elements in C language
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
            sum+=array[i][j];
        }
    }
    printf("Sum of array element is %d\n",sum);
    return 0;
}