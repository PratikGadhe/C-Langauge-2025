/*
    if else statement is written in this format :

    if(Condition) {
    //do something if TRUE
    }
    else {
    //do something if FALSE
    }

*/

#include <stdio.h>
int main(){
    int age ;
    printf("Enter Your Age :");
    scanf("%d",&age);
    
    if(age>18){
        printf("You are Adult\n");
        printf("You Can Drive\n");
        printf("You Can Vote\n");
    }
    else{
        printf("You are not Adult\n");
        printf("You Can not Drive\n");
        printf("You Can not Vote\n");
    }
    return 0;
}