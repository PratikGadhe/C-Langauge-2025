// Write a program to print sum of given first n numbers in C language
#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum of first n natural number : %d\n",sum);
    return 0;
}