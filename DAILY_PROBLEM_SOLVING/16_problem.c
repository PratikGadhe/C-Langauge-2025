// Write a program to accept roll number ,and marks for three subjects,
//print total marks and average
//also print grade by considering following conditions
/*
Avg>=60 Grade A
Avg<60,Avg >=50 Grade B
Avg<50,Avg >=40 Grade C
*/
#include <stdio.h>
int main(){
    int roll_no;
    int phy,chem,maths;
    int total,average;
    printf("Enter Marks in Physics : ");
    scanf("%d",&phy);
    printf("Enter Marks in Chemistry : ");
    scanf("%d",&chem);
    printf("Enter Marks in Maths : ");
    scanf("%d",&maths);
    total=(phy+chem+maths);
    average=total/3;
    printf("Total Mark Obtain : %d\n",total);
    printf("percentile : %d\n",average);
    if(average>=60){
        printf("Grade obtain : A\n");
    }
    else if (average>=50 && average<60){
        printf("Grade obtain : B\n");
    }
    else if (average>=40 && average<50){
        printf("Grade obtain : C\n");
    }
    else{
        printf("Better Luck next Time !\n");
    }
    return 0;
}