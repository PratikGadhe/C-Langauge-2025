// Write a program to accept a number from user and print it’s factorial, check if it prime or not , and print it’s fibbonacci series using different functions in C language
#include <stdio.h>
int fact(int n);
int prime(int n);
void fibonacci(int n);
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial of %d is %d\n",n,fact(n));
    printf("\n");
    int p1=prime(n);
    if(p1==1){
        printf("%d is a prime number!\n",n);
    }
    else{
        printf("%d is not a prime number!\n",n);
    }
    printf("\n");
    fibonacci(n);
    return 0;
}
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int prime(int n){
    int prime = 1;
    for(int i=2;i<n;i++){
        if(n%i == 0){
            prime = 0;
            break;
        }
    }
    return prime;
}
void fibonacci(int n){
    int f1=0,f2=1;
    printf("Fibonacci Series :\n");
    printf("%d\t %d\t ",f1,f2);
    for(int i=2;i<n;i++){
        int f3=f1+f2;
        printf("%d\t ",f3);
        f1=f2;
        f2=f3;
    }printf("\n");
}