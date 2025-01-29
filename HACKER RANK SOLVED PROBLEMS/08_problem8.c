//Given a five digit integer, print the sum of its digits.
#include <stdio.h>

int main() {
    int num, digit,sum=0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;  // Get the last digit
        sum+=digit;
        num /= 10;         // Remove the last digit
    }
    printf("%d\n",sum);
    return 0;
}