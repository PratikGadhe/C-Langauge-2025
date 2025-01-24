/*
EOF(END OF FILE): if we use fgetc to read the character 
at that time it returns EOF in the end to show that the file has ended
*/
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("01_hello.txt","r");
    char ch;
    ch=fgetc(fptr);
    while(ch != EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}