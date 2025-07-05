//Write a program to accept a number n from user and then accept n array elements from user, 
//print positive & Negative numbers separately in C language
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
    printf("Positive Numbers :\n");
    for(int i=0;i<n;i++){
        if(arr[i]>=1){
            printf("%d\n",arr[i]);
        }
    }
    printf("Negative Numbers : \n");
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}