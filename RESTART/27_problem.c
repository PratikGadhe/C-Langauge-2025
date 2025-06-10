//Make a program that inputs user's name & prints its length.
#include <stdio.h>
int count_length(char name[]);
int main(){
    char name[100];
    printf("Enter Your Name : ");
    fgets(name,100,stdin);
    printf("length of string is %d",count_length(name));
    return 0;
}
int count_length(char name[]){
    int count=0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count-1;
}