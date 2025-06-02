#include <stdio.h>
void square(int n1);
void _square(int *n);
int main(){
    int n=4;
    square(n); //16
    printf("Number : %d\n",n); //4
    _square(&n); //16
    printf("Number is : %d\n",n); //16
    return 0;
}
//call by value
void square(int n1){
    n1=n1*n1;
    printf("Sqaure is %d\n",n1);
}
//call by reference
void _square(int *n){
    *n=(*n)*(*n); //4*4
    printf("Square is %d\n",*n);
}