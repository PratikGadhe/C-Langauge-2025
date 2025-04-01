//Write a program to print digits, alphabets in capital and lower case in C language
#include <stdio.h>
int main(){
    printf("Upper case alphabets are : ");
    for(int i=65;i<=90;i++){
        printf("%c ",i);
    }printf("\n");
    printf("Lower case alphabets are : ");
    for(int i=97;i<123;i++){
        printf("%c ",i);
    }printf("\n");
    printf("Digits are : ");
    for(int i=48;i<=57;i++)
      printf("%c ",i);
    return 0;
}