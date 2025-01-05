//Write a program to print the smallest number

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter A Number :");
    scanf("%d",&a);
    printf("Enter A Number :");
    scanf("%d",&b);
    printf("Enter A Number :");
    scanf("%d",&c);
    printf("a is smallest number %d\n",(a<b)||(a<c)); 
    printf("b is smallest number %d\n",(b<a)||(b<c));
    printf("c is smallest number %d\n",(c<a)||(c<b));
    return 0;
}