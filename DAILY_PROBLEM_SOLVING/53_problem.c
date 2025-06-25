// Write a program to print digits, alphabets in capital and lower case in C language
#include <stdio.h>
void digit();
void alphabets();

int main(){
    int n=0;
    printf("1. digit \n 2. alphabet\n");
    printf("Enter your choice (1-2):");
    scanf("%d",&n);
    if(n==1){
        digit();
    }else{
        alphabets();
    }
    return 0;
}
void digit(){
    printf("Digits are : ");
    for(int i=48;i<=57;i++){
        printf("%c ",i);
    }printf("\n");
}
void alphabets(){
    printf("Capital letters : ");
    for(int i=65;i<=90;i++){
        printf("%c ",i);
    }printf("\n");
    printf("Lowercase letters : ");
    for(int i=97;i<=122;i++){
        printf("%c ",i);
    }printf("\n");
}