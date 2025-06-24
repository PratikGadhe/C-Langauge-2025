//4. Create a function in C to calculate the factorial of a given number and display the result
#include <stdio.h>
int factorial(int n);       //function declaration

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial of given number %d is %d\n",n,factorial(n));      //calling function and printing factorial of n
    return 0;
}

int factorial(int n){       //function definition
    int fact=1;
    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}