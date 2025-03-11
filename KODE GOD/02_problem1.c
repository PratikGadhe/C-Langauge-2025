/*
   A    [3 1 3]
  BBB   [2 3 2]
 CCCCC  [1 5 1]
DDDDDDD [0 7 0]
*/
#include <stdio.h>
void print1(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        //alphabet
        char ch='A'+i;
        for(int j=0;j<i*2+1;j++){
            printf("%c",ch);
        }
        //space
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }printf("\n");

    }
}
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    print1(n);
    return 0;
}