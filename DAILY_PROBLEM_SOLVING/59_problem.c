//Write a program to accept two numbers from user and print it’s addition,subtraction,multiplication,division using different functions in C language
#include <stdio.h>
int add(int x , int y);
int sub(int x , int y);
int mul(int x , int y);
float div(float x , float y);
int main(){
    int n1,n2;
    printf("Enter Number 1 : ");
    scanf("%d",&n1);
    printf("Enter Number 2 : ");
    scanf("%d",&n2);
    printf("Addition : %d\n",add(n1,n2));
    printf("Subtraction : %d\n",sub(n1,n2));
    printf("Multiplication : %d\n",mul(n1,n2));
    printf("Division : %f\n",div(n1,n2));
    return 0;
}
int add(int x , int y){
    return x+y;
}
int sub(int x , int y){
    return x-y;
}
int mul(int x , int y){
    return x*y;
}
float div(float x , float y){
    return x/y;
}