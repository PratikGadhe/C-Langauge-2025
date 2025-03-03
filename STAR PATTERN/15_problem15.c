/*
ABCDE
ABCD
ABC
AB
A
*/
#include <stdio.h>
void print15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch <= 'A'+(n-i-1) ;ch++){
            printf("%c",ch);
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Number of Rows : ");
    scanf("%d",&n);
    print15(n);
    return 0;
}