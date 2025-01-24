/*
if there is already a file in which data is present and we open  file as writing mode,
after printing new data ..the data present before will be clear out
*/ 
#include <stdio.h>
int main(){
    FILE *fptr;
    //mode="w" -> this will clear the data of hello.txt and will print the data using fprintf
    // fptr=fopen("01_hello.txt","w")

    //mode="a" ->this will not clear the data of hello.txt and will add data in the end 
    fptr=fopen("01_hello.txt","a");
    fprintf(fptr,"%c",' ');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'p');
    fprintf(fptr,"%c",'p');
    fprintf(fptr,"%c",'l');
    fprintf(fptr,"%c",'e');
    fclose(fptr);
    return 0;
}