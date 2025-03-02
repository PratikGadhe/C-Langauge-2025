/*
1
12
123
1234
12345
*/
#include <stdio.h>
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Number of Rows : ");
    scanf("%d",&n);
    print3(n);
    return 0;
}