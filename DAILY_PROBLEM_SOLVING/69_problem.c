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
    //array = [20,10,30,40,1]
    int max = arr[0];
    int min = arr[0];
    for(int i = 1 ; i<n ;i++){
        if(arr[i]<min){
            min=arr[i];
            printf("%d",min);
        }
        else{
            printf("%d",min);
        }printf(",");
    }
    return 0;
}