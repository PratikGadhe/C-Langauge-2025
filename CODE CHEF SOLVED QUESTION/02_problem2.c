//Write a C program that takes an integer as input and prints its reverse. Use a while loop for the reversal process.
#include <stdio.h>

int main() {
	// your code goes here
    int n,digit,sum=0;
    scanf("%d",&n);
    while(n>0){
        digit=n%10;
        sum+=digit;
        n /= 10;
    }
    printf("%d",sum);
    return 0;
}
