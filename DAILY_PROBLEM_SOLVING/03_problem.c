// Write a program to print area of a circle. A(circle)= 3.142 * R * R in C language
//Write a program to print area of a triangle A(Triangle)= 0.5 * B * H in C language
#include <stdio.h>
int main(){
    float radius;
    float area;
    float base,height;
    printf("Enter Radius of a Circle : ");
    scanf("%f",&radius);
    printf("Enter base of triangle : ");
    scanf("%f",&base);
    printf("Enter height of triangle : ");
    scanf("%f",&height);
    area=(3.14*radius*radius);
    printf("Area of Circle : %f\n",area);
    area=(0.5*base*height);
    printf("Area of Triangle : %f\n",area);
    return 0;
}