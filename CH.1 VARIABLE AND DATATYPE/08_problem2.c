//Write a program to calculate area of a circle.

#include <stdio.h>
int main(){
    float pie=3.14;
    float radius;
    printf("Enter Radius of a circle :");
    scanf("%f",&radius);
    float area=pie*radius*radius;
    printf("Area of circle is %f\n",area);
    return 0;
}