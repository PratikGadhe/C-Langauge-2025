//Write a Program to print first n odd numbers in C language
#include <stdio.h>
int main(){
    int n;
    int odd=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",odd);
        odd+=2;
    }
    return 0;
}