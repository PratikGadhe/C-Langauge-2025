//how to take input and output in string array
//for string we use special format specifier that is %s ;
#include <stdio.h>
int main(){
    char name[50];
    printf("Enter Your Name :");
    scanf("%s",name);

    printf("Your Name is %s\n",name);
    return 0;
} 