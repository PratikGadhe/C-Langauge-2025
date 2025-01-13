//Write functions to calculate area of a square, a circle & a rectangle.
#include <stdio.h>

void square(int s);
void circle(float r);
int rectangle(int l,int b);

int main(){
    int s,l,b;
    float r;
    printf("Enter number :");
    scanf("%d",&s);
    printf("Enter radius of a circle:");
    scanf("%f",&r);
    printf("Enter length :");
    scanf("%d",&l);
    printf("Enter breadth :");
    scanf("%d",&b);
    square(s);
    circle(r);
    rectangle(l,b);
    return 0;
}
void square(int s){
    s=s*s;
    printf("Area of square is %d\n",s);
}
void circle(float r){
    r=3.14*(r*r);
    printf("Area of a circle is %f\n",r);
}
int rectangle(int l,int b){
    printf("Area of rectangle is %d\n",l*b);
    return l*b;
}