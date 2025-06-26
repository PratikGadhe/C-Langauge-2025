// Write a program to accept a number n from user and Add n terms of the series in C language
//n=5  : 1+2+3+4+5
#include <stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum of %d term of the series is : %d\n",n,sum);
    return 0;
}