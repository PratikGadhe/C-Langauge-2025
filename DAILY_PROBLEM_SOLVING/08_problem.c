//Write a program to accept two number and print largest among them in C language
#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter Number 1 : ");
    scanf("%d",&n1);
    printf("Enter Number 2 : ");
    scanf("%d",&n2);
    if(n1>n2){
        printf("Largest Number is %d\n",n1);
    }
    else if (n1==n2){
        printf("Both Numbers are equal \n");
    }
    else{
        printf("Largest Number is %d\n",n2);
    }
    return 0;
}