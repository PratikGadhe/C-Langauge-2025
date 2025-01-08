/*
    else if is return in this format :

    if(Condition 1) {
    //do something if TRUE
    }
    else if (Condition 2) {
    //do something if 1st is FALSE & 2nd is TRUE
    }

*/

#include <stdio.h>
int main(){
    int age;
    printf("Enter Your Age :");
    scanf("%d",&age);
    if(age>=18 && age<=45){
        printf("You are Adult\n");
    }
    else if(age>=45 && age<60){
        printf("You are adult and elder too\n");
    }
    else if(age>60){
        printf("You Are older now\n");
    }
    else{
        printf("you are not adult\n");
    }
    return 0;
}