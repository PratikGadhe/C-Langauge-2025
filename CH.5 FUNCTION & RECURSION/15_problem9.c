//Write a function to print n terms of the fibonachi sequence.
//0 1 1 2 3 5 8 13... 

#include <stdio.h>
int fibonachi(int n);
int main(){
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    printf("Fibonachi sequence :%d\n",fibonachi(n));
    return 0;
}
int fibonachi(int n){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }        
    int fibnm1 = fibonachi(n-1);
    int fibnm2 = fibonachi(n-2);
    int fibn = fibnm1 + fibnm2;
    return fibn;
}
