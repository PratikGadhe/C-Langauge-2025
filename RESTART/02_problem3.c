/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *   
        *
*/

#include <stdio.h>
void print3(int n){
    for(int i=0;i<(n*2-1);i++){
        if(i>4){
            //space
            int start=i-n;
            for(int j=0;j<start+1;j++){
                printf(" ");
            }
            //star
            for(int j=0;j<(n*2)-(i*2-7);j++){
                printf("*");
            }
            //space
            for(int j=0;j<start+1;j++){
                printf(" ");
            }printf("\n");
        }
        //space
        for(int j=1;j<=n-i-1;j++){
            printf(" ");
        }
        //star
        for(int j=1;j<=i*2+1;j++){
            printf("*");
        }
        //space
        for(int j=1;j<=n-i-1;j++){
            printf(" ");
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    print3(n);
    return 0;
}