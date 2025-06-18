//Write a program to calculate roots of a quadratic equations in C language
/*
x=b^2-4ac
if x=0 -> only one root ,
if x>0 -> roots are distinct (–b+x)/2a & (–b-x)/2a
if x<0 -> roots are imaginary
*/
#include <stdio.h>
int main(){
    int a,b,c;
    int x;
    int r1,r2;
    printf("Enter A : ");
    scanf("%d",&a);
    printf("Enter B : ");
    scanf("%d",&b);
    printf("Enter C : ");
    scanf("%d",&c);
    x=((b*b)-(4*a*c));
    r1=(-b+x)/(2*a);
    r2=(-b-x)/(2*a);
    if(x==0){
        printf("Only one root (x=%d)\n",x);
    }
    else if (x>0){
        printf("Roots are distinct (x=%d)\n",x);
        printf("r1 = %d\n",r1);
        printf("r2 = %d\n",r2);
    }
    else{
        printf("Roots are imaginary (x=%d)\n",x);
    }
   
    return 0;
}
//https://blog.kodegod.com/learn-programming/101-programs-to-build-your-programming-logic-using-c-programming/