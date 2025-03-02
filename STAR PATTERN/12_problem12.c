/*
1      1
12    21
123  321
12344321
*/
#include <stdio.h>
void print12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int j=1;j<=(2*n)-(i*2);j++){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }printf("\n");

    }
}
int main(){
    int n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    print12(n);
    return 0;
}