//Write a program to accept a number n from user 
//and then accept n array elements from user and reprint them in reverse order of inputs in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int arr[n];
    //input
    for(int i=0;i<n;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    //reverse order
    printf("\n");
    printf("Reverse order\n");
    printf("\n");
    for(int j=(n-1);j>=0;j--){
        printf("%d",arr[j]);
    }printf("\n");
    return 0;
}