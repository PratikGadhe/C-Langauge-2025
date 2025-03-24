//Write a program to print sum of given first n numbers in C language
#include <stdio.h>
int main(){
    int n,count=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        count=count+i;
    }
    printf("Sum of first n numbers are %d\n",count);
    return 0;
}