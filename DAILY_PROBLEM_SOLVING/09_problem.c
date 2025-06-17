//Write a program to accept a number and print if the number is Positive/Negative in C language
#include <stdio.h>
int main(){
    int n1;
    printf("Enter a Number : ");
    scanf("%d",&n1);
    if(n1>0){
        printf("Number is Positive !\n");
    }
    else if (n1==0){
        printf("Number is neither negative nor positive!\n");
    }
    else{
        printf("Number is Negative !\n");
    }
    return 0;
}