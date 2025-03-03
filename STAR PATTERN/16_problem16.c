/*
A
BB
CCC
DDDD
EEEEE
*/
#include <stdio.h>
void print16(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            printf("%c",ch);
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Number Of rows : ");
    scanf("%d",&n);
    print16(n);
    return 0;
}