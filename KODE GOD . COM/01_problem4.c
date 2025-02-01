//Write a program to print area of a triangle A(Triangle)= 0.5 * B * H in C language
#include <stdio.h>
int main(){
    int base,height;
    printf("Enter Base :");
    scanf("%d",&base);
    printf("Enter Height :");
    scanf("%d",&height);
    float area;
    area=0.5*base*height;
    printf("Area of Triangle : %f\n",area);
    return 0;
}