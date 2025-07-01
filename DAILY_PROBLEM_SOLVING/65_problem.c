//Write a program to accept a number n from user and 
//then accept n array elements from user and print addition of those n array elements in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum is : %d\n",sum);
    return 0;
}