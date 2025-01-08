/*
    Write a Program to find if a character entered by user is upper case or not.
*/

#include <stdio.h>
int main(){
    char character;
    printf("Enter a character :");
    scanf("%c",&character);
    if(character >= 'A' && character <='Z'){
        printf("Character enter by user is in UPPER CASE\n");
    }
    else if(character >='a' && character <='z'){
        printf("Character enter by user is in LOWER CASE\n");
    }
    else{
        printf("you enter special character\n");
    }
    return 0;
}