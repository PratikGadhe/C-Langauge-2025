// Write a program to print following outputs in C language
/*
   A        [3,1,3]
  BBB       [2,3,2]
 CCCCC      [1,5,1]
DDDDDDD     [0,7,0]
*/
#include <stdio.h>
int main(){
    int n;
    char temp='A';
    printf("Enter number of rows : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<(n-i-1);j++){
            printf("  ");
        }
        //star
        for(int j=0;j<(i*2+1);j++){
            printf("%c ",temp);
        }temp++;
        //space
        for(int j=0;j<(n-i-1);j++){
            printf("  ");
        }printf("\n");
    }
    
    return 0;
}