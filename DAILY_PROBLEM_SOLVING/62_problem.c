//Write a program to accept two numbers from user and swap their values using call by reference method in C language
#include <stdio.h>
void swap(int *n1,int *n2){
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}
int main(){
    int n1,n2;
    printf("Enter Number : ");
    scanf("%d",&n1);
    printf("Enter number 2: ");
    scanf("%d",&n2);
    printf("Numbers before swapping : a = %d and b = %d\n",n1,n2);
    swap(&n1,&n2);
    printf("Numbers After swapping : a = %d and b = %d\n",n1,n2);
    return 0;
}