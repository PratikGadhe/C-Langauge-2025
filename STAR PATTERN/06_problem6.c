/*
12345
1234
123
12
1
*/
#include <stdio.h>
void print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            printf("%d",j);
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    print6(n);
    return 0;
}