//Write a function named slice, which takes a string & returns a sliced string from index n to m.
#include <stdio.h>
#include <string.h>
void slice(char string[]);
int main(){
    char string[50];
    printf("Your a String : ");
    fgets(string,50,stdin);
    slice(string);
    return 0;
}
void slice(char string[]){
    int n=2,m=4;
    printf("after slicing the index:");
    for(int i = n ;i<=m ; i++){
        printf("%c",string[i]);
    }printf("\n");
}