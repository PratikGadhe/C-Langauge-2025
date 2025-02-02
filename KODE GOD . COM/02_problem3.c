//Write a program to accept a number and print if the number is Positive/Negative in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    if(n>0){
        printf("%d is a positivr number\n",n);
    }else if(n<0){
        printf("%d is a negative number\n",n);
    }else{
        printf("%d is neither positve nor negative\n",n);
    }
    return 0;
}