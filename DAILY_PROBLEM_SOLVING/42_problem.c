//Write a program to accept a number from user and print if it is prime or not in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int prime = 1; //true
    for(int i=2;i<n;i++){
        if(n%i == 0){
            prime = 0; //false
            break;
        }
    }
    if(prime == 1){
        printf("%d is a prime number\n",n);
    }
    else{
        printf("%d is not a prime number\n",n);
    }
    return 0;
}