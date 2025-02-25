/*
*****
****
***
**
*
*/
#include <stdio.h>
void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("*");
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Numbers of row : ");
    scanf("%d",&n);
    print5(n);
    return 0;
}