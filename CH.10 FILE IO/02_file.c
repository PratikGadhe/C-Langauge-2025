//FILE : A container in a storage device (hard disk) that store the data
//#FILE pointer :FILE  is a hidden (structue) that needs to be created to open a file
/*
    #OPENING OF FILE 
    FILE *fptr;
    fptr=fopen("filename",mode);

    #CLOSING OF FILE
    fclose(fptr);
*/
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("hello.c","r");
    fclose(fptr);
    return 0;
}