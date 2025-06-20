// Write a program to print following outputs in C language
/*
* * * * * * * * *       [0,9,0]
  * * * * * * *         [1,7,1]
    * * * * *           [2,5,2]
      * * *             [3,3,3]   
        *               [4,1,4]
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            printf("  ");
        }
        //start
        for(int j=0;j<(n*2)-(i*2+1);j++){
            printf("* ");
        }
        //space
        for(int j=0;j<i;j++){
            printf("  ");
        }printf("\n");
    }
    return 0;
}