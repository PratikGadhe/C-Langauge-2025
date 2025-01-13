/*
    Write a function that prints Namaste if user is Indian
    & Bonjour if the user is French.
*/

#include <stdio.h>

void indian();  //function declare
void french();

int main(){

    printf("Press i For INDIAN & f For FRENCH :");   //function call
    char ch;
    scanf("%c",&ch);

    if(ch == 'i'){
        indian();
    }
    else if (ch == 'f'){
        french();
    }
    else{
        printf("You Entered Wrong Character !!");
    }
    return 0;
}

void indian(){
    printf("Namaste \n");    // function define
    printf("Welcome to India ! \n");
}


void french(){
    printf("Bonjour \n");
    printf("Bienvenue en français !! \n");
}