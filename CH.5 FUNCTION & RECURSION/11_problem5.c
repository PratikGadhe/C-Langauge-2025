//factorial using recursion

#include <stdio.h>

int fact(int n);

int main(){
    int n1;
    printf("Enter a Number:");
    scanf("%d",&n1);

    printf("Factorial of %d is %d\n",n1,fact(n1));
    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    int mult = fact(n-1); 
    int factorial =mult*n;
    return factorial;
}