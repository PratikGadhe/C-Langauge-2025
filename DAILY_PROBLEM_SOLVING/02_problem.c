//002. Write a program to accept values of two numbers and print their addition,subtraction,multiplication/division
#include <stdio.h>
int main(){
    float a,b;
    float add,sub,mul;
    float div;
    printf("Enter A : ");
    scanf("%f",&a);
    printf("Enter B : ");
    scanf("%f",&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("Addition : %f \n",add);
    printf("Subtraction : %f\n",sub);
    printf("Multiplication : %f\n",mul);
    printf("Division : %f\n",div);
    return 0;
}