/*
    Write a program to check if a given number is Armstrong number or not.
    153=1^3+5^3+5^3=153
*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    int original = n;
    int count =0;
    int digit=0;
    while(n>0){
        digit=n%10;
        count+=digit*digit*digit;
        n = n/10;
    }
    if(count == original){
        printf("%d is Armstrong Number\n",original);
    }
    else{
        printf("%d is not Armstrong Number\n", original);
    }
    return 0;
}