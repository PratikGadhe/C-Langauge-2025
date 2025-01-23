//arrays in structure
/*
    struct student ECE[100];
    struct student COE[100];
    struct student IT[100];
    #ACCESS
    IT[0].roll = 200;
    IT[0].cgpa = 7.6;
*/
#include <stdio.h>
#include <string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct student co1[100];
    co1[0].roll=57;
    co1[0].cgpa=7.50;
    strcpy(co1[0].name,"pratik vilas gadhe");
    struct student it[100];
    it[0].roll=48;
    it[0].cgpa=9.50;
    strcpy(it[0].name,"sanket vilas gadhe");
    printf("Name of student :%s\n",co1[0].name);
    printf("Roll Number :%d\n",co1[0].roll);
    printf("CGPA obtain :%f\n",co1[0].cgpa);
    printf("\n");
    printf("Name of student :%s\n",it[0].name);
    printf("Roll Number :%d\n",it[0].roll);
    printf("CGPA obtain :%f\n",it[0].cgpa);
    return 0;
}