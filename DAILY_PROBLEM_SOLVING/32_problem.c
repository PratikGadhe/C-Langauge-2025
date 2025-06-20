//Write a program to print following outputs in C language
/*
        *               
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
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
    return 0;
}