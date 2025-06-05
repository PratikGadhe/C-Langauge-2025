//Write a function to reverse an array.
#include <stdio.h>
int reverse(int array[],int n);
int main(){
    int array[]={1,2,3,4,5,6,7,8,9};
    printf("%d\n",reverse(array,9));
    return 0;
}
int reverse(int array[],int n){
    array[0]=array[8];
    array[1]=array[7];
    array[2]=array[6];
    array[3]=array[5];
    array[4]=array[4];
    array[8]=array[0];
    array[7]=array[1];
    array[6]=array[2];
    array[5]=array[3];
    array[4]=array[4];
    return array;
}