//Write a program to accept a number from user and print if it is divisible by 5 in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n%5==0){
        printf("%d is divisible by 5\n",n);
    }
    else{
        printf("%d is not divisible by 5\n",n);
    }
    return 0;
}