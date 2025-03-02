//printing star pattern using function
// outer loop is use to print rows
// inner loop is used to print columns and somehow connect inner loop with rows
/*
*****
*****
*****
*****
*****
*/
#include <stdio.h>
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("*");
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Numbers of Rows : ");
    scanf("%d",&n);
    print1(n);
    return 0;
}