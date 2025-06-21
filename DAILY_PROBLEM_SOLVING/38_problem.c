// Write a program to print following outputs in C language
/*
ABCDEEDCBA      [5,0,5]
ABCD  DCBA      [4,2,4]
ABC    CBA      [3,4,3]
AB      BA      [2,6,2]
A        A      [1,8,1]
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int alphabet='A';
        //alphabet
        for(int j=0;j<(n-i);j++){
                printf("%c",alphabet);
                alphabet++;
        }
        alphabet--;
        //space
        
        for(int j=0;j<i*2;j++){
            printf(" ");
        }
        //alphabet
        for(int j=0;j<(n-i);j++){
            printf("%c",alphabet);
            alphabet--;
        }printf("\n");
    }
    return 0;
}