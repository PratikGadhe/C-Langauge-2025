/*
        *           [4 1 4]
      * * *         [3 3 3]
    * * * * *       [2 5 2]
  * * * * * * *     [1 7 1]
* * * * * * * * *   [0 9 0]
  * * * * * * *     [1 7 1]
    * * * * *       [2 5 2]
      * * *         [3 3 3]  
        *           [4 1 4]
*/
#include <stdio.h>
void print6(int n){
    for(int i=1;i<=(n*2-1);i++){
        int start=i;
        if(i>5){
            start=i-n;
            //space
            for(int j=0;j<start;j++){
                printf(" ");
            }//star
            for(int j=0;j<(n*2)-(i*2-9);j++){
                printf("*");
            }//space
            for(int j=0;j<start;j++){
                printf(" ");
            }printf("\n");
        }
        else{
            //space
            for(int j=0;j<n-i;j++){
                printf(" ");
            }//star
            for(int j=0;j<i*2-1;j++){
                printf("*");
            }//space
            for(int j=0;j<n-i;j++){
                printf(" ");
            }printf("\n");
        }
    }
}
int main(){
    int n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    print6(n);
    return 0;
}