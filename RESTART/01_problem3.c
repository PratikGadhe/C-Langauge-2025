//Write a Program to accept a number and print the number in reverse order.
#include <stdio.h>
int main(){
    int n,rem;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        printf("%d",rem);
        n=n/10;
    }printf("\n");
    return 0;
}