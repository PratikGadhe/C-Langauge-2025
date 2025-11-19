//Write a program to accept a number from user and check if it is Armstrong number or not 
//i.e. 153 = 1^3 + 5^3 + 3^3 = 153 in C language
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int digit = 0;
    int sum=0;
    int temp;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    // Count digits
    int power = 0;
    while(temp > 0){
        power++;
        temp /= 10;
    }
    
    temp = n;
    while(temp > 0){
        digit = temp % 10;
        sum += pow(digit, power);
        temp /= 10;
    }
    if(sum == n){
        printf("%d is an Armstrong Number\n", n);
    }
    else{
        printf("%d is not a Armstrong Number\n", n);
    }
    return 0;
}