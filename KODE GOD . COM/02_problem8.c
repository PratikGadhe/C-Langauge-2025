//Write a program to accept two numbers from user and compare them in C language
#include <stdio.h>
int main(){
    int n,n1;
    printf("Enter Two Numbers :");
    scanf("%d %d",&n,&n1);
    if(n==n1){
        printf("True (%d)\n",n==n1);
    }else{
        printf("False (%d)\n",n!=n1);
    }
    return 0;
}