//Write a Program to print numbers n to 1 using Do While loop in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i=1;
    do{
        printf("%d\n",n);
        n--;
    }while(n>=i);
    return 0;
}