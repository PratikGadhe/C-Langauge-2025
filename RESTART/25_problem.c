//gets puts
#include <stdio.h>
int main(){
    char name[100];
    printf("Enter Your Full Name : ");
    fgets(name,100,stdin);
    printf("Your full name is ");
    puts(name);
    return 0;
}