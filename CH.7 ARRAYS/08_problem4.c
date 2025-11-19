//Write a function to count the number of odd numbers in an array.
#include <stdio.h>
void odd(int arr[],int n);
int main(){
    int arr[5];
    int *ptr= &arr[0];
    printf("Enter any 5 numbers :\n");
    for(int i = 0 ;i<5;i++){
        scanf("%d ",&arr[i]);
    }
    odd(arr,5);
    return 0;
}
void odd(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 != 0 ){
            count++;
        }
    }
    printf("Number of odd numbers in array are :%d\n",count);
}