//Write a Program to print first n even numbers in C language
#include <stdio.h>
int main(){
    int n,count = 2;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",count);
        count=count+2;
    }
    return 0;
}