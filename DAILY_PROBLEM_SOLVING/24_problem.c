//Write a program to accept a number from user and check if it is Armstrong number or not 
//i.e. 153 = 1^3 + 5^3 + 3^3 = 153 in C language
#include <stdio.h>
int main(){
    int n;
    int count = 0;
    int sum=0;
    int i=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    i=n;
    while(n>0){
        count=n%10;
        sum+=(count*count*count);
        n=n/10;
    }
    if(sum==i){
        printf("%d is an Armstrong Number\n",i);
    }
    else{
        printf("%d is not a Armstrong Number\n",i);
    }
    return 0;
}