//Write a program to check if a number is odd or even.
//even -> 1
//odd -> 0

#include <stdio.h>
int main(){
    int a;
    printf("Enter a Number :");
    scanf("%d",&a);
    printf(" %d\n",a%2==0);  
    return 0;
}