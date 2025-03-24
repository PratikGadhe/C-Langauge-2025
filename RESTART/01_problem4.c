//Write a Program to accept a number and print sum of it’s digits in C language
#include <stdio.h>
int main(){
    int n,rem,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        sum+=rem;
        n=n/10;
    }printf("Sum of its digit is %d\n",sum);
    return 0;
}