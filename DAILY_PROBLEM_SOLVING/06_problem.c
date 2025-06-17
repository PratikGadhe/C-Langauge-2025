// Write a program to accept two values a & b and interchange their values in C language
#include <stdio.h>
int main(){
    int a,b;
    int temperary;
    printf("Enter A : ");
    scanf("%d",&a);
    printf("Enter B : ");
    scanf("%d",&b);
    printf("Value of A before interchange is %d and value of B before interchange is %d\n",a,b);
    temperary=a;
    a=b;
    b=temperary;
    printf("Value of A after interchange is %d and value of B after interchange is %d\n",a,b);
    return 0;
}