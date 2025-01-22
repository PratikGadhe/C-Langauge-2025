//Find the salted form of a password entered by user if the salt is "123" & added at the end.

#include <stdio.h>
#include <string.h>
void salt(char password[]);
int main(){
    char password[100];
    printf("Enter Your Password : ");
    scanf("%s",password);
    salt(password);
    return 0;
}
void salt(char password[]){
    char salt[]="123";
    strcat(password,salt);
    printf("your new password is %s\n",password);
}