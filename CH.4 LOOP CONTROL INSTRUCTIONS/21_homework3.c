//write a program to check if a number is prime or not 

#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);

    int prime=1;  //true   (for prime)

    for(int i=2 ; i<n ; i++){
        if(n%i == 0){
            prime=0;  //false (for not prime)
            break;
        }
    }
    if(prime==1){
        printf("It is Prime\n");
    }
    else{
        printf("It is not prime\n");
    }
    return 0;
}