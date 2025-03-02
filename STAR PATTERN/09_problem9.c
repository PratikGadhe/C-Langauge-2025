/*
space star space
    *       [4,1,4]               
   ***      [3,3,3]
  *****     [2,5,2]
 *******    [1,7,1]
*********   [0,9,0]
*********   [0,9,0]
 *******    [1,7,1]
  *****     [2,5,2]
   ***      [3,3,3]
    *       [4,1,4]   
*/
#include <stdio.h>
void print9(int n){
    for(int i=0;i<n;i++){ 
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<i*2+1;j++){
            printf("*");
        }
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int j=0;j<n*2-(i*2+1);j++){
            printf("*");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Number of Rows : ");
    scanf("%d",&n);
    print9(n);
    return 0;
}