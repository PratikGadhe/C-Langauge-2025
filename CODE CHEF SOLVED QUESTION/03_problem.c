//Given a positive integer N,find sum of its digits
#include <stdio.h>

int main() {
    int n,digit,sum;
    scanf("%d", &n);
    while(n>0){
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    printf("%d\n",sum);
}