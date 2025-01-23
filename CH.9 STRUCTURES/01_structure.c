//A collection of values of different data types is known as structures.
/*
    Syntax:
    #this is user defined datatype:
    1. struct student{
        char name[100];
        int roll_no;
        float cgpa;  
       }
    #this will put the value in structure
    2. struct student s1;
    s1.name="pratik";
    s1.roll_no=57;
    s1.cgpa=7.5;
*/
#include <stdio.h>
struct student{
    char *name;
    int roll_no;
    float cgpa;
};
int main(){
    struct student s1;
    s1.name="Pratik Vilas Gadhe";
    s1.roll_no=57;
    s1.cgpa=7.50;
    printf("Name of Student :%s\n",s1.name);
    printf("Roll no of Student :%d\n",s1.roll_no);
    printf("CGPA Obtained: %f\n",s1.cgpa);
    return 0;
}