//Write a program to print following outputs in C language
/*
        *
      * *
    * * *
  * * * *
* * * * *
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=(n-i);j++){
            printf("  ");
        }
        //star
        for(int j=1;j<=i;j++){
            printf("* ");
        }printf("\n");
    }
    return 0;
}