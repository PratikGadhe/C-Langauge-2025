/*
    functions can take value & give some value
    1. parameter    2.return value

    a. void printhello();
    b. void printtable(int n);
    c. int sum(int a , int b);
*/

#include <stdio.h>

int sum(int x , int y );

int main(){
    int a,b;
    printf("Enter number 1 :");
    scanf("%d",&a);
    printf("Enter number 2 :");
    scanf("%d",&b);

    int s=sum(a,b);
    printf("Sum is : %d\n",s);
    return 0;
}

int sum(int x , int y){
    return x + y;
}