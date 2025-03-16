//Write a program to accept a number from user and print if it is prime or not in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int prime = 1 ; //true 
    for(int i=2;i<n;i++){
        if(n%i == 0){
            prime = 0;
            break;
        }
    }
    if(prime == 1){
        printf("Number is a Prime Number\n");
    }
    else{
        printf("Number is Not a Prime Number\n");
    }
    return 0;
}