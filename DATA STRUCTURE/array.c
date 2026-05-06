//push alll the zero elements to the end of arr
#include <stdio.h>
int main(){
     int arr[]={0,1,2,0,3,0};
     int n = 6;
    // int min = arr[0];
    // int max = arr[5];
    // for(int i = 0 ; i<7 ; i++){
    //     if(arr[i] <= min){
    //         min = arr[i];
    //     }
    // }
    // for(int i = 0 ; i<7 ; i++){
    //     if(arr[i] >= max){
    //         max = arr[i];
    //     }
    // }

    // int n = 6;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         if(arr[j] < arr[j+1]){
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    // printf("%d  ",arr[i]);
    // }
int i = 0;
int j =0;
int arr1[n];

while(i<=n){
    if(arr[i] != 0){
        arr1[j] = arr[i];
        j++;
        i++;
    }
}

while(j<n){
    arr1[j++] = 0;
}
for(int i=0;i<n;i++){
    printf("%d  ",arr1[i]);
    }
    
}