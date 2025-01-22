//standard library function for string
//<sting.h>
//1. strlen(str); -> this function count the length of string without count null value('\0')
//2. strcpy(new_str,old_str); -> this function will copy the string of old string into new string 
//3. strcat(first_str,second_str); -> this function will join tqo string woth each other
//4. strcmp(first,second); -> this funvtion will compare two string and return the value
#include <stdio.h>
#include <string.h>
int main(){
    //1.strlen(str);
    char name[100]="pratik";
    int length =strlen(name);
    printf("Length of your name is : %d\n",length);

    //2.strcpy(new_str,old_str);
    char old_string[]="old string";
    char new_string[]="new string";
    strcpy(new_string,old_string);
    puts(new_string);


    //3. strcat(first_str,second_str);
    char first[100]="pratik gadhe ";
    char second[]="SVKM IOT";
    strcat(first,second);
    puts(first);

    //4. strcmp(first,second);
    char first1[]="apple";
    char second2[]="banana";
    printf("%d\n",strcmp(second2,first1));
    return 0;
}