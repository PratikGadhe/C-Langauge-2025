// how else if works 
/*basically if we use else if statement it will check wehter the condition is true or not 
if it is true then it will print the output and ignore all the statement whether they are true or false*/
//there is ladder of if else statement and only one statement will be printed if we use else if statement while programming

#include <stdio.h>
int main(){
    int age=65;
    if(age>60){
        printf("Age is greater than 18 and youre senior citizen");
    }
    else if(age>18){
        printf("Age is greater than 18");
    }
    else if (age>45){
        printf("Age is greater than 18 and your are elder");
    }
    else{
        printf("Age is less than 18");
    }
    return 0;
}