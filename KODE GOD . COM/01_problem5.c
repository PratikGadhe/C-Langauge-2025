//Write a program to print simple interest SI = (PNR)/100 in C language
#include <stdio.h>
int main(){
    int amount,time;
    float rate;
    printf("Enter Principle Amount :");
    scanf("%d",&amount);
    printf("Enter Rate of Interest :");
    scanf("%f",&rate);
    printf("Enter time (Y/M) :");
    scanf("%d",&time);
    float simple_interest;
    simple_interest=(amount*rate*time)/100;
    printf("Simple Interest for %d /- is %f /-\n",amount,simple_interest);
    return 0;
}