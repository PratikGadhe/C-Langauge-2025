//Write a program to accept a number and print prime numbers between 2 and n in C language
//n=15 : 3,5,7,11,13
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int prime = 1;
    printf("Prime number between 2 to %d are : ",n);
    for(int i=2;i<=n;i++){
        for(int j=2;j<i;j++){
            if(i%j == 0){
                prime = 0;
                break;
            }
            else{
                prime = 1;
            }
        }
        if(prime == 1){
            printf("%d ",i);
        }

    }printf("\n");
    return 0;
}