/*
* * * *     [2,0,2]
*     *     [1,2,1]
*     *     [1,2,1]
* * * *     [2,0,2]
*/
#include <stdio.h>
void print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==(n-1) || j==(n-1)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    print21(n);
    return 0;
}