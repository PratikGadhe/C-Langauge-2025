//Write a program to check if given character is digit or not.

#include <stdio.h>
int main(){
    char a;
    printf("Enter a Character :");
    scanf("%c",&a);
    // single digit -> true (1)
    // double digit -> false (0)
    if(a>=65 && a<=114){//ASCII Value
        printf("Yes,its a digit ! \n");
    }
    else{
        printf("No,its not a digit ! \n");
    }
    return 0;
}