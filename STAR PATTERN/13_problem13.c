/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include <stdio.h>
void print13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num);
            num=num+1;
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Number of Row : ");
    scanf("%d",&n);
    print13(n);
    return 0;
}