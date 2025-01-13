//Use functions to calculate the square of a number given by user.

#include <stdio.h>

void square(int x);

int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    square(n);
    return 0;
}

void square(int x){
    x=x*x;
    printf("Square of a number is :%d\n",x);
}