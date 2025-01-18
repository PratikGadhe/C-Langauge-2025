//Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function.
#include <stdio.h>
void dowork(int a , int b , int *sum ,int *product ,int *average);
int main(){
    int x,y;
    printf("Enter Vlaue of X:");
    scanf("%d",&x);
    printf("Enter Value of Y:");
    scanf("%d",&y);
    int sum , product ,average;
    dowork(x,y,&sum,&product,&average);
    printf("Sum is %d , product is %d ,average is %d\n",sum,product,average);
    return 0;
}
void dowork(int a , int b ,int *sum ,int *product ,int *average){
    *sum = a+b;
    *product =a*b;
    *average =(a+b)/2;
}