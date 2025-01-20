//Write a function to reverse an array.
#include <stdio.h>
void reverse(int arr[],int n);
int main(){
    int arr[5]={1,2,3,4,5};
    reverse(arr,5);
    return 0;
}
void reverse(int arr[],int n){
    printf("Reverse order:\n");
    for(int i=4;i>=0;i--){
        printf("%d\n",arr[i]);
    }
}
