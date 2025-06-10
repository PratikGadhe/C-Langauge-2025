//Write a function to reverse an array.
#include <stdio.h>
void reverse(int array[],int n);
void print_reverse(int array[],int n);
int main(){
    int array[]={1,2,3,4,5,6,7,8,9};
    reverse(array,9);
    print_reverse(array,9);
    
}
void reverse(int array[],int n){
    for(int i=0;i<n/2;i++){
        int first_val=array[i]; //1,2,3,4
        int second_val=array[n-i-1]; //9,8,7,6,5
        array[i]=second_val;
        array[n-i-1]=first_val;
    }
}
void print_reverse(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d \t",array[i]);
    }printf("\n");
}