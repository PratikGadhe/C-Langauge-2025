// Write a program to accept two values a & b and interchange their values in C language
#include <stdio.h>
int main(){
    int a,b;
    int c=0;
    printf("Enter a & b : ");
    scanf("%d %d",&a,&b);
    printf("Values of A & B before interchange :");
    printf("A = %d , B = %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Values of A & B after interchange :");
    printf("A = %d , B = %d\n",a,b);
    return 0;
}