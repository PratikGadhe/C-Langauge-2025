// Write a Program to accept a number and print the number in reverse order.
//E.g. if 1324 is the number then the output will be 4231 in C language
#include <stdio.h>
int main(){
    int n,digit;
    printf("Enter A number : ");
    scanf("%d",&n);
    printf("Entered Number in Reverse Order\n");
    while(n>0){
        digit=n%10;
        printf("%d\n",digit);
        n/=10;
    }
    return 0;
}