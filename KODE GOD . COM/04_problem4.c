//Write a program to print sum of given first n numbers in C language
#include <stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }printf("Sum of given first n numbers is %d\n",sum);
    return 0;
}