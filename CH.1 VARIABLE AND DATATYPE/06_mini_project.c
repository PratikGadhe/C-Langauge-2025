// take a and b as a input from user and print its sum

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter Value Of a:");
    scanf("%d",&a);

    printf("Enter value of b:");
    scanf("%d",&b);
    
    int sum=a+b;
    printf("The sum of a and b is %d\n",sum);
    // printf("The sum of a and b is %d",a+b);
    return 0;
}