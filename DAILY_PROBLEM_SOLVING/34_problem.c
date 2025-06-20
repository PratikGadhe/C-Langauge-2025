//. Write a program to print following outputs in C language
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
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i=0;i<(n*2-1);i++){
        if(i<n){
            //space
            for(int j=0;j<(n-i-1);j++){
                printf("  ");
            }
            //star
            for(int j=0;j<(i*2+1);j++){
                printf("* ");
            }
            //space
            for(int j=0;j<(n-i-1);j++){
                printf("  ");
            }printf("\n");
        }
        else{  //i=5
            //space
            for(int j=0;j<(i-n+1);j++){
                printf("  ");
            }
            //star
            for(int j=0;j<((n - (i - n + 1) - 1)*2 + 1);j++){    //(n-(i-n+1)-1)*2+1
                printf("* ");
            }
            //space
            for(int j=0;j<(i-n+1);j++){
                printf("  ");
            }printf("\n");
        }
    }
    return 0;
}