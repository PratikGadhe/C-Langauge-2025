//Write a program to accept a number and print prime numbers between 2 and n in C language
#include <stdio.h>

int main() {
    int n;
    
    // Accepting user input
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Prime numbers between 2 and %d are: ", n);
    for (int i = 2; i <= n; i++) {
        int isPrime = 1; // Assume i is prime
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
