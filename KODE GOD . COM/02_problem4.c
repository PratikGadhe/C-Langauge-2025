// Write a program to accept a number and check if it is >10, <10 or =10 in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    if(n>10){
        printf("%d is greater than 10\n",n);
    }else if (n<10){
        printf("%d is less than 10\n",n);
    }else{
        printf("%d is equals to 10\n",n);
    }
    return 0;
}