//Write a program to calculate roots of a quadratic equations in C language
#include <stdio.h>
int main(){
    float a,b,c,x,r1,r2;
    printf("Enter a,b,c :");
    scanf("%f %f %f",&a,&b,&c);
    x=(b*b)-4*a*c;
    if(x>0){
        printf("Roots are distinct (-b+x)/2a & (-b-x)/2a\n");
    }else if(x<0){
        printf("Roots are imaginary\n");
    }else{
        printf("Roots are same\n");
    }
    r1=(-b+x)/2*a;
    r2=(-b-x)/2*a;
    printf("R1 = %f\n",r1);
    printf("R2 = %f\n",r2);
    return 0;
}