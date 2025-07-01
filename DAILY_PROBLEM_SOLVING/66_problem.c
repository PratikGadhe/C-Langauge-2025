//Write a program to accept a number n from user and print fibbonacci series up to nth level using arrays in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    printf("Fibonacci series for %d is : %d \t %d \t ",n,arr[0],arr[1]);
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
        printf("%d \t",arr[i]);
    }printf("\n");
    return 0;
}