//Write a program to calculate perimeter of rectangle.
// Take sides a & b from the user.

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter Value of a :");
    scanf("%d",&a);
    printf("Enter Value of b :");
    scanf("%d",&b);

    int area = 2*(a+b);
    printf("The area of rectangle is %d\n",area);
    return 0;
}