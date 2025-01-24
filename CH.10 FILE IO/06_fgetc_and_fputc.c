//we also use fgetc function for reading the character & also we can use fputc function for wrinting/printing the characters

#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("01_hello.txt","w");
    printf("Character : %c\n",fgetc(fptr));
    printf("Character : %c\n",fgetc(fptr));
    printf("Character : %c\n",fgetc(fptr));
    printf("Character : %c\n",fgetc(fptr));
    printf("Character : %c\n",fgetc(fptr));

    fputc('M',fptr);
    fputc('a',fptr);
    fputc('n',fptr);
    fputc('g',fptr);
    fputc('o',fptr);
    fclose(fptr);
    return 0;
}