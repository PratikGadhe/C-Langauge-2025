/*
    Write a program to check if a student passed or failed.
    marks > 30 is PASS
    marks <= 30 is FAIL
*/

#include <stdio.h>
int main(){
    int phy,chem,math;
    printf("Enter marks in physics:");
    scanf("%d",&phy);
    printf("Enter marks in chemistry:");
    scanf("%d",&chem);
    printf("Enter marks in maths:");
    scanf("%d",&math);

    int marks;
    marks=(phy+chem+math)/3;

    if(marks > 30){
        printf("You Are Passed in all subject\n ");
    }
    else{
        printf("Unfortunately You are failed the exam \n");
    }
    printf("Total Marks Obtained : %d\n",marks);
    return 0;
}