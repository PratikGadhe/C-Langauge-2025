/*
Write a program in C to create a structure of student with student name and rollno and (6)
marks of two subjects as its members. Calculate average of two subjects. Read the details of n students from user and then display the data in this format.
Roll No. Name Sub1 Sub2 Total Average
*/
#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll_no;
    int subject_1;
    int subject_2;
};
int main(){
    struct student s1;
    s1.roll_no=57;
    strcpy(s1.name,"Pratik Gadhe");
    s1.subject_1=90;
    s1.subject_2=80;
    float average;
    average=(s1.subject_1+s1.subject_2)/2;
    printf("Roll Number : %d\t Name : %s\t Subject 1 : %d\t ,Subject 2 : %d\t,Average : %f\n",s1.roll_no,s1.name,s1.subject_1,s1.subject_2,average);
    return 0;
}