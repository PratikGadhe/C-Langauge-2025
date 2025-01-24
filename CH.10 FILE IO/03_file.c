//Check if a file exists before reading from it.


#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("hello.c","w");
    if(fptr == NULL){
        printf("File doesn't exist !\n");
    }
    else{
        fclose(fptr);
    }
    return 0;
}