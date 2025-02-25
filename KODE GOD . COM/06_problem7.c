/*
    *           [4,1,4]
   ***          [3,3,3]
  *****         [2,5,2]
 *******        [1,7,1]
*********       [0,9,0]

*/
#include <stdio.h>
void print7(int n){
    for(int i=0;i<n;i++){
        //for space
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        //star
        for(int j=0;j<i*2+1;j++){
            printf("*");
        }
        //space
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }printf("\n");
    }
}
int main(){
    int n;
    printf("enter numbers of row : ");
    scanf("%d",&n);
    print7(n);
    
    return 0;
}