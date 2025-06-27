// Write a program to accept a single value interger from user and print that integer in words in C language
//n=123: one two three
#include <stdio.h>
int main(){
    int n;
    int rev=0;
    int count=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n==0){
        printf("Zero\n");
    }
    while(n>0){
        rev = rev * 10 + n % 10;        //whenever we have to add two numbers(4+3=43) then multiply first number by 10 (4x10+3=43)and then add it !
        n=n/10;
    }
    while(rev>0){
        count=rev%10;
        switch(count){
            case 1 : printf("One ");
                     break;
            case 2 : printf("Two ");
                     break;
            case 3 : printf("Three ");
                     break;
            case 4 : printf("Four ");
                     break;
            case 5 : printf("Five ");
                     break;
            case 6 : printf("Six ");
                     break;
            case 7 : printf("Seven ");
                     break;
            case 8 : printf("Eight ");
                     break;
            case 9 : printf("Nine ");
                     break;
            case 0 : printf("Zero ");
                     break;
        }
        rev=rev/10;
    }printf("\n");
    return 0;
}