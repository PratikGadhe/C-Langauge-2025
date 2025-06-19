//Write a Program to print first n even numbers in C language
#include <stdio.h>
int main(){
    int n;
    int even=2;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",even);
        even=even+2;
    }
    return 0;
}