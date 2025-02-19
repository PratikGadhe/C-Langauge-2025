// Write a program to accept a number from user and check if it is Armstrong number or not
// i.e. 153 = 1^3 + 5^3 + 3^3 = 153 in C language
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int count = 0;
    int digit;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int copy = n;
    //count the digits present in entered number 
    while (copy != 0)
    {
        digit = copy % 10; 
        count++;
        copy /= 10;
    }
    
    int original = n;
    int rem;
    int sum = 0;
    int power;

    while (original != 0)
    {
        rem = original % 10;
        sum+=pow(rem, count);
        
        original /= 10;
    }
    printf("\n");
    if(sum == n){
        printf("Yes,The Number Entered By The User is an Arnstrong Number !\n");
    }
    else{
        printf("No,The Number Entered By The User is Not an Arnstrong Number !\n");
    }
    printf("\n");
    return 0;
}