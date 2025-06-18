// Write a program to accept two numbers from user and compare them in C language
#include <stdio.h>
int main(){
    int n1 , n2;
    printf("Enter number 1 : ");
    scanf("%d",&n1);
    printf("Enter number 2 : ");
    scanf("%d",&n2);
    if(n1>n2){
        printf("%d is greater than %d\n",n1,n2);
    }
    else if(n1==n2){
        printf("Both the numbers are equal\n");
    }
    else{
        printf("%d is smaller than %d\n",n1,n2);
    }
    return 0;
}