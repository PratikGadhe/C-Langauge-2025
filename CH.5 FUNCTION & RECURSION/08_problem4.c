//Use functions to calculate the square of a number given by user.

#include <stdio.h>

int square(int x);

int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    printf("Square of a number is :%d\n",square(n));
    return 0;
}

int square(int x){
    return x*x;   
}