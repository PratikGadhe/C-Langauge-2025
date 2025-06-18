//Write a Program to accept user’s marital status, gender and age to check if he/she is eligible for marriage or not.
#include <stdio.h>
int main(){
    char status,gender;
    int age;
    printf("Enter Your Marital Status (m/u): ");
    scanf("%c",&status);
    printf("Enter Gender(m/f) : ");
    scanf("%c",&gender);
    printf("Enter your age : ");
    scanf("%d",&age);
    if(status =='u'){
        if(gender == 'm' && age>=25){
            printf("You're Eligible for Marriage !\n");
        }
        else if (gender == 'f' && age>20){
            printf("You're Eligible for Marriage !\n");
        }
        else{
            printf("Sorry,You're not Eligible for marriage\n");
        }
    }
    else{
        printf("You're Already Married !\n");
    }
    return 0;
}