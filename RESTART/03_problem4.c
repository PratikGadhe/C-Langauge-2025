//Write a program to accept a number n from user and Add n terms of the series in C language
#include <stdio.h>
int main(){
    int n,fact=1,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
        sum=sum+fact;
    }
    printf("sum of nth term : %d\n",sum);
    printf("factorial : %d\n",fact);
    return 0;
}