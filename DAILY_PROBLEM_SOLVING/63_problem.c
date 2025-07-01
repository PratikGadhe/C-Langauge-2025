// Write a program to accept a number n from user and then accept n array elements from user and reprint them in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int arr[n];
    //input
    for(int i=0;i<n;i++){
        printf("Enter array element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    //output
    for(int j=0;j<n;j++){
        printf("element %d : %d\n",j+1,arr[j]);
    }
    return 0;
}