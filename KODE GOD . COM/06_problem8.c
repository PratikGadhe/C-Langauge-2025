/*
*********       [0,9,0]
 *******        [1,7,1]
  *****         [2,5,2]
   ***          [3,3,3]
    *           [4,1,4]
*/
#include <stdio.h>
void print8(int n){
    for(int i=0;i<=n;i++){
        //space
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int j=0;j<2*n-(2*i-1);j++){
            printf("*");
        }
        for(int j=0;j<i;j++){
            printf(" ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter numbers of row : ");
    scanf("%d",&n);
    print8(n);
    return 0;
}