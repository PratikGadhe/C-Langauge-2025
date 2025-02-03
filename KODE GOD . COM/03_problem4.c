//Write a Program to print numbers n to 1 using Do While loop in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int i=1;
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=n);
    return 0;
}