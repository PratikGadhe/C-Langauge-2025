//Take a string input from the user using %C.
#include <stdio.h>
void string(char ch);
int main(){
    char str[100];
    char ch;
    int i=0;
    printf("Enter a String:");
    while(ch != '\n'){
        scanf("%c",&ch);
        str[i]=ch;
        i++;
    }str[i] ='\0';
    puts(str);
    return 0;

}
