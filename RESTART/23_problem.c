//Create a String first Name & last Name to store details of user & print all the characters using a loop.
#include <stdio.h>
void detail(char arr[]);

int main(){
    char firstname[]="pratik";
    char lastname[]="Gadhe";
    detail(firstname);
    detail(lastname);
    return 0;
}
void detail(char arr[]){
    for(int i=0;arr[i] != '\0';i++){
        printf("%c ",arr[i]);
    } printf("\t");
}