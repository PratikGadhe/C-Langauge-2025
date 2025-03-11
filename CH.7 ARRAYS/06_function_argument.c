//Arrays as Function Argument
//function decalration
/*
void pointnumber(int arr[],int n); -> int n is a size of array
--------OR---------
void pointnumber(int *arr , int n); ->int n is a size of array
*/
//function call 
/*
pointnumber(arr,n);
-------or--------
pointnumber(&arr[0]);
*/
#include <stdio.h>
void printnumber(int *arr,int n);
int main(){
    int arr[]={1,2,3,4,5,6};
    printnumber(arr ,6);
    return 0;
}
void printnumber(int *arr,int n){
    for(int i=0 ; i < n ;i++){
        printf("%d  \t",arr[i]);
    }
    printf("\n");
}