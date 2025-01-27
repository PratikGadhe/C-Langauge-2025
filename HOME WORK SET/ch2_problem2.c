//wap to check if given character is digit or not
#include <stdio.h>
int main(){
    char c;
    printf("Enter a Character :");
    scanf("%c",&c);
    if(c >= 65 && c <= 122){
        printf("Given character is a digit ");
    }
    else{
        printf("Given character is not a digit");
    }
    return 0;
}