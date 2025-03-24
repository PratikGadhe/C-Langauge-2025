//Write a Program to print first n odd numbers in C language
#include <stdio.h>
int main(){
    int n,count=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",count);
        count=count+2;
    }
    return 0;
}