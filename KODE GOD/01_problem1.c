/*
* * * * *
* * * *
* * *
* *
*
*/
#include <stdio.h>
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf("* ");
        }printf("\n");
    } 
}
int main(){
    int n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    print1(n);
    return 0;
}