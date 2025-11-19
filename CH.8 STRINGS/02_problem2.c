//Create a String first Name & last Name to store details of user & print all the characters using a loop.
#include <stdio.h>

void string(char array[]);

int main(){
    char first_name[50];
    char middle_name[50];
    char last_name[50];
    printf("Enter Your FIRST NAME :");
    scanf("%s",first_name);
    printf("Enter Your MIDDLE  NAME :");
    scanf("%s",middle_name);
    printf("Enter Your LAST NAME :");
    scanf("%s",last_name);
    printf("Your Full Name is ");
    printf("%s",first_name);
    string(first_name);
    string(middle_name);
    string(last_name);
    printf("\n");
    return 0;
}
void string(char array[]){
    for(int i = 0 ; array[i] != '\0';i++ ){
        printf("%c",array[i]);
    }
printf(" ");
}