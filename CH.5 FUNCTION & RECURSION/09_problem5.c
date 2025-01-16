//Write functions to calculate area of a square, a circle & a rectangle.
#include <stdio.h>

int square(int s);
float circle(float r);
int rectangle(int l,int b);

int main(){
    int s,l,b;
    float r;
    printf("Enter side of square :");
    scanf("%d",&s);
    printf("Enter radius of a circle:");
    scanf("%f",&r);
    printf("Enter length of rectangle :");
    scanf("%d",&l);
    printf("Enter breadth of rectangle :");
    scanf("%d",&b);
    printf("Area of Square :%d\n",square(s));
    printf("Area of Circle :%f\n",circle(r));
    printf("Area of Rectangle:%d\n",rectangle(l,b));
    return 0;
}
int square(int s){
    return s*s;
}
float circle(float r){
     return 3.14*(r*r);
}
int rectangle(int l,int b){
    return l*b;
}