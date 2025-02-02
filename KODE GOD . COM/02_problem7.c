// Write a program to accept a number from user and print if it is multiple of 7 in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    if(n%7 == 0){
        printf("%d is multiple of table 7\n",n);
    }else{
        printf("%d is not multiple of other table\n",n);
    }
    return 0;
}