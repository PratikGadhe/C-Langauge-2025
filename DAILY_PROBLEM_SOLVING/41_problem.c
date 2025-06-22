// Write a program to accept a number from user and print it’s factorial in C language
//5! = 5 * 4 * 3 * 2 * 1=120
#include <stdio.h>
int main(){
    int n;
    int fact=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    printf("Factorial of %d number is %d\n",n,fact);
    return 0;
}
//https://blog.kodegod.com/learn-programming/101-programs-to-build-your-programming-logic-using-c-programming/