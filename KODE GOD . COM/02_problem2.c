// Write a program to accept two number and print largest among them in C language
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter a & b :");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("A is larger\n");
    }
    else{
        printf("B is larger\n");
    }
    return 0;
}