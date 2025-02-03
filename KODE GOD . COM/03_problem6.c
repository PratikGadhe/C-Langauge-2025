// Write a Program to print first n odd numbers in C language
#include <stdio.h>
int main(){
    int n,counter=1;
    printf("Enter a Number : ");
    scanf("%d",&n);
    printf("First %d odd numbers are \n",n);
    for(int i=1;i<=n;i++){
        printf("%d\n",counter);
        counter=counter+2;
    }
    return 0;
}