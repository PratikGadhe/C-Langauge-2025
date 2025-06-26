// Write a program to accept a single value interger from user and print that integer in words in C language
//n=123: one two three
#include <stdio.h>
int main(){
    int n;
    int count;
    printf("Enter a Number : ");
    scanf("%d",&n);
    while(n>0){
        count=n%10;
        n=n/10;
    }
    switch (count){
        case 1 : printf("One ");
        case 2 : printf("One ");
        case 3: printf("One ");
        case 4: printf("One ");
        case 5: printf("One ");
        case 6: printf("One ");
        case 7: printf("One ");
        case 8: printf("One ");
        case 9: printf("One ");
        case 10: printf("One ");
        
    }
    return 0;
}