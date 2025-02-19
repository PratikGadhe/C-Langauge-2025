//Write a Program to accept a number and print sum of it’s digits in C language
#include <stdio.h>
int main(){
    int n,digit,sum=0;
    printf("Enter A Number : ");
    scanf("%d",&n);
    while(n>0){
        digit=n%10;
        sum+=digit;
        n/=10;
    }printf("Sum of digits is %d\n",sum);
    return 0;
}