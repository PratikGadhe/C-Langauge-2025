//Write a program to print area of a circle. A(circle)= 3.142 * R * R in C language
#include <stdio.h>
int main(){
    float radius;
    printf("Enter Radius of a Circle :");
    scanf("%f",&radius);
    float area=3.14*radius*radius;
    printf("Area of Circle is %f\n",area);
    return 0;
}