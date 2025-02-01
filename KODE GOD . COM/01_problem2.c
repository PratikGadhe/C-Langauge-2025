//Write a program to accept values of two numbers and print their + - * /
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter A :");
    scanf("%d",&a);
    printf("Enter B :");
    scanf("%d",&b);
    int sum=a+b;
    int difference=a-b;
    int multiplication = a*b;
    float division=a/b;
    printf("Sum is %d\n",sum);
    printf("Difference is %d\n",difference);
    printf("Multiplication is %d\n",multiplication);
    printf("Division is %f\n",division);
    return 0;
}