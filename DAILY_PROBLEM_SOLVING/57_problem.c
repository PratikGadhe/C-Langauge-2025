//Write a program to accept a number from user and print that number in words but in reverse order in C language
//E.g. 153 -> THREE FIVE ONE
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int count=0;
    while(n>0){
        count=n%10;
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
        n=n/10;
    }printf("\n");
    return 0;
}