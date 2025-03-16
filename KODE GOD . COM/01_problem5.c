//Write a program to print simple interest SI = (PNR)/100 in C language
#include <stdio.h>
int main(){
    int amount,time;
    int rate;
    printf("Enter Principle Amount :");
    scanf("%d",&amount);
    printf("Enter Rate of Interest :");
    scanf("%d",&rate);
    printf("Enter time (Y/M) :");
    scanf("%d",&time);
    int simple_interest;
    simple_interest=(amount*rate*time)/100;
    printf("Simple Interest for %d Rs is : %d Rs\n",amount,simple_interest);
    return 0;
}