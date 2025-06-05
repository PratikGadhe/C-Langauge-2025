#include <stdio.h>
void swap(int arr[],int n);
int main(){
    int arr[]={13,15};
    swap(arr,2);
    printf("after swapping : a= %d, b=%d\n",arr[0],arr[1]);
    return 0;
}
void swap(int arr[],int n){
    int t;
    t=arr[0];
    arr[0]=arr[1];
    arr[1]=t;
}