// Write a program to accept a number from user and print it’s factorial in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    int fact = 1;
    for(int i=1 ; i<=n ; i++){
        fact = fact * i;
    }
    printf("factorial number is %d\n",fact);
    return 0;
}