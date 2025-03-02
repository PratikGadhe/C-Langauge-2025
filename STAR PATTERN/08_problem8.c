/*
space star space 
*********       [0,9,0]
 *******        [1,7,1]
  *****         [2,5,2]
   ***          [3,3,3]
    *           [4,1,4]
*/
#include <stdio.h>
void print8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            printf(" ");
        }
        //star
        for(int j=0;j<(n*2)-(i*2+1);j++){
            printf("*");
        }
        //space
        for(int j=0;j<i;j++){
            printf(" ");
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Number of Rows : ");
    scanf("%d",&n);
    print8(n);
    return 0;
}