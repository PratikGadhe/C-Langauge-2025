//Write a function that prints Namaste if user is Indian
//& Bonjour if the user is French.
#include <stdio.h>

void printnamaste();
void printbonjour();

int main(){
    char a;
    printf("Enter i For Indian and f for French Language : ");
    scanf("%c",&a);
    if(a == 'i'){
        printnamaste();
    }
    else if (a == 'f'){
        printbonjour();
    }
    return 0;
}

void printnamaste(){
    printf("Namaste India !\n");
}

void printbonjour(){
    printf("Bonjour French !\n");
}