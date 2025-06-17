// Write a program to accept a number from user and print it’s square & cube in C language
#include <stdio.h>
int main(){
    int n;
    int square,cube;
    printf("Enter a Number : ");
    scanf("%d",&n);
    square=n*n;
    cube=n*n*n;
    printf("Sqaure : %d\n",square);
    printf("Cube : %d\n",cube);
    return 0;
}