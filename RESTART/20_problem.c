//Write a function to count the number of odd numbers in an array.
#include <stdio.h>
int count(int arr[],int n);

int main(){
    int aray[]={1,2,3,4,5,7,5,4,3,2,4,6,7,7,3,45,67,65,4,2,1};
    printf("Odd Numbers are %d\n",count(aray,21));
    return 0;
}
int count(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 != 0){
            count=count+1;
        }
    }
    return count;
}