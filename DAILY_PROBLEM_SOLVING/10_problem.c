//Write a program to accept a number from user and print if it is even or odd in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is Even Number\n",n);
    }
    else{
        printf("%d is odd number\n",n);
    }
    return 0;
}