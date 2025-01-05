/* Write a program to determine whether a student has passed or failed.
To pass, a student requires a total of 40% and at least 33% in each subiect.
Assume there are three subjects and take the marks as input from the user.*/

#include <stdio.h>
int main(){
    float p,c,m;
    printf("Enter Marks of physic:");
    scanf("%f",&p);
    printf("Enter Marks of chemistry:");
    scanf("%f",&c);
    printf("Enter Marks of maths:");
    scanf("%f",&m);
    float avg=(p+c+m)/3;
    if(p<33||c<33||m<33){
        printf("You are falied due to bad score in individual subject ");
    }
    else if(avg<40){
        printf("You Are falied due to less percentage");
    }
    else{
        printf("you are passed and qualified for next class !");
    }
    return 0;
}