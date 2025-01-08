/*
    Write a program to check if the given number is a natural number.
*/

#include <stdio.h>
int main(){
    int number;
    printf("Enter A Number :");
    scanf("%d",&number);

    if( number > 0){
        printf("It is a Natural Number\n");
    }
    else if (number >= 0){
        printf("it is whole number\n");
    }
    else{
        printf("it is negative number ");
    }
    
    return 0;
}