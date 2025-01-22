//Make a program that inputs user's name & prints its length.
#include <stdio.h>
void length(char name[]);
int main(){
    char name[100];
    printf("Enter Your Name :");
    fgets(name,100,stdin);
    length(name);
    return 0;
}
void length(char name[]){
    int length = 0;
    for(int i=0 ; name[i] != '\0' ;i++){
        length++;
    }
    printf("LENGTH OF YOUR NAME IS :%d\n",length-1);
}