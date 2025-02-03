//Write a Program to print first n even numbers in C language
#include <stdio.h>
int main(){
    int n,counter=2;
    printf("Enter a Number : ");
    scanf("%d",&n);
    printf("First %d even numbers are ",n);
    for(int i=1;i<=n;i++){
        printf("%d \n",counter);
        counter=counter+2;
    }
    return 0;
}