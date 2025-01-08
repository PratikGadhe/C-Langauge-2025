/*
    Write a Program to give grades to a student
    marks < 30 is C
    30 <= marks < 70 is B
    70 <= marks < 90 is A
    90 <= marks <= 100 is A+
*/  

#include <stdio.h>
int main(){
    int marks;
    printf("Enter Marks (1-100):");
    scanf("%d",&marks);
    if(marks >= 0 && marks < 30){
        printf("Your Grade is C\n");
    }
    else if (marks >= 30 && marks < 70){
        printf("Your Grade is B\n");
    }
    else if (marks >=70 && marks < 90){
        printf("Your Grade is A\n");
    }
    else if (marks >= 90 && marks <=100){
        printf("Your Grade is A+\n");
    }
    else{
        printf("You Enter marks more than 100 Incorrect !!\n");
    }
    return 0;
}