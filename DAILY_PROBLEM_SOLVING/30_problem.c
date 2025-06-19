//Write a program to print following outputs in C language
/*
* * * * *
  * * * *
    * * *
      * *
        *
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
        //star
        for(int j=0;j<(n-i);j++){
            printf("* ");
        }printf("\n");
    }
    return 0;
}