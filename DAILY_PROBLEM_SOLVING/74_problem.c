//multidimensional array
#include <stdio.h>
int main(){
    int matrix[3][3];
    printf("Enter 3x3 matrix element :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Element [%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    //displaying matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",matrix[i][j]);
        }printf("\n");
    }
    return 0;
}