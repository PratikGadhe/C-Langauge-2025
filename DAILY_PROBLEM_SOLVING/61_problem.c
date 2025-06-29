//Write a program to calculate square and cube of a given number in C language
#include <stdio.h>
int square(int x){
    return x*x;
}
int cube(int x){
    return x*x*x;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Square : %d\n",square(n));
    printf("Cube : %d\n",cube(n));
    return 0;
}