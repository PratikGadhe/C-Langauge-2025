//Write a program to check if a number is divisible by 2 or not.

#include <stdio.h>
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("the number %d\n",a%2==0);
    return 0;
}