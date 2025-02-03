//Write a program to accept roll number , and marks for three subjects,print total marks and average
//also print grade by considering following conditions
/*
Avg>=60 Grade A
Avg<60,Avg >=50 Grade B
Avg<50,Avg >=40 Grade C
#include <stdio.h>
*/
#include <stdio.h>
int main(){
    int roll,phy,chem,math;
    printf("Enter roll :");
    scanf("%d",&roll);
    printf("Enter Marks in Physics,chemistry,math:");
    scanf("%d %d %d",&phy,&chem,&math);
    int total;
    float avg;
    total=phy+chem+math;
    avg=total/3;
    printf("Total Marks Obtain : %d\n",total);
    printf("Average : %f\n",avg);
    if(avg>=60){
        printf("Grade : A\n");
    }else if(avg<60 && avg>=50){
        printf("Grade : B\n");
    }else if(avg<50 && avg>=40){
        printf("Grade : C\n");
    }else{
        printf("Sorry You are fail :( Better luck next time\n");
    }
    return 0;
}