//Check if a given character is present in a string or not.
#include <stdio.h>
void character(char string[],char ch);
int main(){
    char string[100]="pratik";
    char ch='x';
    character(string,ch);
    return 0;
}
void character(char string[],char ch){
    for(int i =0 ; string[i] != '\0';i++){
        if(string[i] == ch){
            printf("CHARACTER IS PRESENT !\n");
            return;
        }
    }
    printf("CHARACTER IS NOT PRESENT :(\n");
}