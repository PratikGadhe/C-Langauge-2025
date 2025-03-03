/*
E
D E
C D E
B C D E
A B C D E
*/
#include <stdio.h>
void print18(int n){
    for(int i=1;i<=n;i++){
        char ch='A'+(n-i);
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    print18(n);
    return 0;
}