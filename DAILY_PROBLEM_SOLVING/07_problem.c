//Write a program to accept roll no and marks of 3 subjects of a student
//Calculate total of 3 subjects and average in C language
#include <stdio.h>
int main(){
    int roll_no;
    int phy,chem,maths;
    int total,average;
    printf("Enter Your Roll Number : ");
    scanf("%d",&roll_no);
    printf("Enter Marks of physics : ");
    scanf("%d",&phy);
    printf("Enter Marks of Chemistry : ");
    scanf("%d",&chem);
    printf("Enter Marks of Maths : ");
    scanf("%d",&maths);
    total=phy+chem+maths;
    average=total/3;
    printf("Total Marks obtained : %d\n",total);
    printf("Average : %d\n",average);
    return 0;
}