//Write a program to print simple interest SI = (PNR)/100 in C language
#include <stdio.h>
int main(){
    int principle_amount;
    int rate_of_interest;
    int time;
    int simple_interest;
    printf("Enter Principle Amount : ");
    scanf("%d",&principle_amount);
    printf("Enter Rate of Interest : ");
    scanf("%d",&rate_of_interest);
    printf("Enter Time : ");
    scanf("%d",&time);

    simple_interest=(principle_amount*rate_of_interest*time)/100;

    printf("Simple Interest for %d amount is : %d\n",principle_amount,simple_interest);
    
    return 0;
}