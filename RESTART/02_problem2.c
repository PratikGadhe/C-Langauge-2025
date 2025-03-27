/*
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *   
        *
*/
#include <stdio.h>
void print2(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            printf(" ");
        }
        //star
        for(int j=0;j<(n*2)-(i*2+1);j++){
            printf("*");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    print2(n);
    return 0;
}