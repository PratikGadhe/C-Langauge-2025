//Write a Program to accept user’s marital status, gender and age to check if he/she is eligible for marriage or not.
#include <stdio.h>
int main(){
    int age;
    char martial_status;
    char gender;
    printf("Enter Martial Status (m/u) & Gender (m/f) : ");
    scanf("%c %c",&martial_status,&gender);
    printf("Enter Your Age : ");
    scanf("%d",&age);
    if(martial_status == 'u'){
        if(gender=='m'){
            if(age>24){
                printf("You can Marry\n");
            }else{
                printf("Your age is less than 24 , You Cannot marry \n");
            }
        }else if (gender == 'f'){
            if(age > 21){
                printf("You can Marry\n");
            }else{
                printf("Your age is less than 21 , You Cannot marry \n");
            }
        }else{
            printf("You Enter wrong Character !!\n");
            printf("please Enter valid character ('m' for male & 'f' for female)\n");
        }
    }else if(martial_status == 'm'){
        printf("You are already married !\n");
    }else{
        printf("You Entered Wrong Character !\n");
        printf("please Enter valid character ('m' for married & 'u' for unmarried)\n");
    }
    return 0;
}