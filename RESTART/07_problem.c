#include <stdio.h>

int sum(int x , int y);

int main(){
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);

    sum(a,b);
    return 0;
}

int sum(int x , int y){
    printf("Sum is : %d\n",(x+y));
    return 0;
}