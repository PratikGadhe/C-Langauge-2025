//Write a program to accept a number n from user and then accept n array elements from user,
//print these array elements in ascending and descending order in C language
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    return 0;
}