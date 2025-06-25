//Write a program to accept a number and print fibonacci series upto that level in C language
#include <stdio.h>
void fibonacci(int n);
int main(){
    int n;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n){
    int f1=0,f2=1;
    printf("Fibonacci series for %d is :\n",n);
    printf("%d\t%d\t",f1,f2);
    for(int i=2;i<n;i++){
        int f3=f1+f2;
        printf("%d\t",f3);
        f1=f2;
        f2=f3;
    }printf("\n");
}