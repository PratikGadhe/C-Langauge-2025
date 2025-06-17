//Write a program to accept a number from user and print if it is multiple of 7 in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n%7==0){
        printf("Number is Multiple of 7\n");
    }
    else{
        printf("Number is not mulyiple of 7\n");
    }
    return 0;
}