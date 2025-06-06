//Write a program to store the first n fibonacci numbers.
//0 1 1 2 3 5 8 11
#include <stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    printf("fibonacci series of %d numbers are : \n",n);
    printf("%d \t %d \t ",fib[0],fib[1]);
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d \t ",fib[i]);
    }printf("\n");
    return 0;
}