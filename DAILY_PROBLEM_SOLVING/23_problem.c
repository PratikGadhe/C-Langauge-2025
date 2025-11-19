//Write a Program to accept a number and print sum of it’s digits in C language
#include <stdio.h>
int main(){
    int n;
    // int count=0;
    int sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
        // count=n%10;
        // sum+=count;
        sum+=n%10;
        n=n/10;
    }printf("Sum of its digit is %d\n",sum);
    return 0;
}