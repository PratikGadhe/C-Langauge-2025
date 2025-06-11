//functions in string
#include <stdio.h>
#include <string.h>
int main(){
    //strlen() function
    char name[100];
    printf("Enter your name : ");
    fgets(name,100,stdin);
    int length=strlen(name);
    printf("Length of the name is %d\n",length-1);

    //strcpy() function
    char name1[]="Pratik";
    char name2[]="Sanket";
    strcpy(name1,name2);
    puts(name1);

    //strcat() function
    char name3[100]="Hello ";
    char name4[]="World";
    strcat(name3,name4);
    puts(name3);

    //strcmp() function
    char name5[]="Pratik";
    char name6[]="Panket";
    printf("%d\n",strcmp(name5,name6));
    return 0;
}