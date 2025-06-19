//Write a Program to print numbers 1 to n using while loop in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}