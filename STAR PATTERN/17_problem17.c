/*
   A        [3,1,3]
  ABA       [2,3,2]
 АВСВА      [1,5,1]
ABCDCBA     [0,7,0]
*/
#include <stdio.h>
void print17(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(char ch='A';ch<='A'+i;ch++){
            printf("%c",ch);
        }
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    print17(n);
    return 0;
}