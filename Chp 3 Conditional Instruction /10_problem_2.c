//Calculate income tax paid by an employee to the government as per the slabs
/*
Income Slab    tax
2.5-5.0L       5%
5.0L - 10.0L   20%
Above 10.0L    30% 
*/
#include <stdio.h>
int main(){
    int income;
    printf("Enter your income:");
    scanf("%d",&income);
    if(income>250000 && income<500000){
        printf("the income tax paid by the user is %d",(income*5/100));
    }
    else if(income>500000 && income<1000000){
        printf("the income tax paid by the user is %d",(income*20/100));
    }
    else if(income>1000000){
        printf("the income tax paid by the user is %d",(income*30/100));
    }
    else{
        printf("your income is less than 2.5 lakh");
    }
    return 0;
}