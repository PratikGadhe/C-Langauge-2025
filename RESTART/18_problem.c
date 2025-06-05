#include <stdio.h>
void printnumber(int arr[],int n);

int main(){
    int arr[]={1,3,5,7,9,11,13};
    printnumber(arr,6);
    return 0;
}
void printnumber(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
}