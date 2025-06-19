// Write a Program to accept a number and print the number in reverse order.
// E.g. if 1324 is the number then the output will be 4231 in C language
#include <stdio.h>
int main(){
    int n;
    int count=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Reverse order : ");
    while(n>0){
        count=n%10; //collect its last degit
        printf("%d",count);
        n=n/10; //remove last digit 
    }printf("\n");
    return 0;
}