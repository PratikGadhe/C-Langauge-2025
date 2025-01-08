//Write a program to print the average of 3 numbers.

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter number a:");
    scanf("%d",&a);
    printf("Enter number b:");
    scanf("%d",&b);
    printf("Enter number c:");
    scanf("%d",&c);

    int avg=(a+b+c)/3;
    printf("Average of three number is %d\n",avg);
    return 0;
}