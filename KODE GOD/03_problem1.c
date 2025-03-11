// Write a program to accept a number from user and print it’s factorial in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d",n*i);
    }
    return 0;
}