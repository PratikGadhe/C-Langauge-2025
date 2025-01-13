// Printing table using function

#include <stdio.h>

void table(int n);
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    table(n);   //argument / actual parameter / input
    return 0;
}

void table(int n){     //formal parameter / ouput 
    for(int i=1 ; i<=10 ; i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}