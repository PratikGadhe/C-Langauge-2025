/*
        *   [4 1]
      * *   [3 2]
    * * *   [2 3]
  * * * *   [1 4]
* * * * *   [0 5]
*/
#include <stdio.h>
void print3(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            printf("  ");
        }
        //star
        for(int j=0;j<i+1;j++){
            printf("* ");
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    print3(n);
    return 0;
}