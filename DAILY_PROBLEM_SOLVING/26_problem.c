//Write a program to print sum of given first n numbers in C language
//n=5 so 1+2+3+4+5
#include <stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("Sum of first %d number is %d\n",n,sum);
    return 0;
}