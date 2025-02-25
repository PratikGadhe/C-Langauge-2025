/*
*
* *
* * *
* * * *
* * * * *
*/
#include <stdio.h>
void print2(int n){
    for(int i=0 ;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Numbers of row : ");
    scanf("%d",&n);
    print2(n);
    return 0;
}