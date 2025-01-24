//reading
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("01_hello.txt","r");
    //FOR PRINTING SINGLE CHARACTER :

    // char ch;
    // fscanf(fptr,"%c",&ch);
    // printf("Character :%c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("Character :%c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("Character :%c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("Character :%c\n",ch);
    // fscanf(fptr,"%c",&ch);
    // printf("Character :%c\n",ch);

    //FOR PRINTINF INTEGER:
    
    int n;
    fscanf(fptr,"%d",&n);
    printf("Integer: %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("Integer: %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("Integer: %d\n",n);
    fclose(fptr);
    return 0;
}