/*
A
AB
ABC
ABCD
ABCDE
*/
#include <stdio.h>
void print14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A'; ch <= 'A'+i ; ch++){
            printf("%c",ch);
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    print14(n);
    return 0;
}