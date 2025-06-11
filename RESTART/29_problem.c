//Find the salted form of a password entered by user if the salt is "123" & added at the end.
#include <stdio.h>
#include <string.h>
void user(char password[]);
int main(){
    char password[100];
    printf("Enter Your Password : ");
    scanf("%s",password);
    
    user(password);
   

    return 0;
}
void user(char password[]){
    char newpassword[100];
    char salt[]="123";
    strcpy(newpassword,password);
    strcat(newpassword,salt);
    puts(newpassword);
}