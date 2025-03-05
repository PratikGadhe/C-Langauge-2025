/*
* * * * *   [0 5]
  * * * *   [1 4]
    * * *   [2 3]
      * *   [3 2]
        *   [4 1]
*/
#include <stdio.h>
void print2(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            printf("  ");
        }
        //star
        for(int j=0;j<n-i;j++){
            printf("* ");
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    print2(n);
    return 0;
}