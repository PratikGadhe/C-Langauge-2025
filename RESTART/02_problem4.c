//Write a program to accept a number from user and print if it is prime or not in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int prime = 1;
    for(int i=2;i<n;i++){
        if(n%i == 0){
            prime = 0;
            break;
        }
    }
    if(prime == 1){
        printf("Yes its a prime number \n");
    }
    else{
        printf("No its not a prime number \n");
    }
    return 0;
}