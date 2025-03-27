//Write a program to accept a number from user and check if it is Armstrong number or not
// i.e. 153 = 1^3 + 5^3 + 3^3 = 153 in C language
#include <stdio.h>
#include <math.h>
int main(){
    int n,count,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int temp;
    temp=n;
    while(n>0){
        count=n%10;
        sum+=pow(count,3);
        n=n/10;
    }
    if(sum==temp){
        printf("Yes ! Entered numbers is armstrong number \n");
    }
    else{
        printf("NO ! Entered numbers is not armstrong number \n");
    }
    return 0;
}