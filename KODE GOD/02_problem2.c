/*
ABCDEEDCBA  [5 0 5]
ABCD  DCBA  [4 2 4]
ABC    CBA  [3 4 3]
AB      BA  [2 6 2]
A        A  [1 8 1]
*/
#include <stdio.h>
void print2(int n){
    for(int i=0;i<n;i++){
        char ch='A';
        //alphabet
        for(int j=0;j<n-i;j++){
            printf("%c",ch);
            ch++;
        }
        //space
        for(int j=0;j<i*2;j++){
            printf(" ");
        }
        //alphabet
        
        for(int j=0;j<n-i;j++){
            printf("%c",ch-1);
            ch--;
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    print2(n);
    return 0;
}