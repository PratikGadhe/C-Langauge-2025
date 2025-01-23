//Write a program to store the data of 3 students.
#include <stdio.h>
struct student1{
    char *name;
    int roll;
    float cgpa;
};
struct student2{
    char *name;
    int roll;
    float cgpa;
};
struct student3{
    char *name;
    int roll;
    float cgpa;
};
int main(){
    struct student1 s1;
    struct student2 s2;
    struct student3 s3;
    s1.name="Pratik gadhe";
    s2.name="Aaditya aadhave";
    s3.name="krushna bhavsar";
    s1.roll=57;
    s2.roll=32;
    s3.roll=44;
    s1.cgpa=7.5;
    s2.cgpa=8.5;
    s3.cgpa=9.5;
    printf("Name of student :%s\n",s1.name);
    printf("Roll Number :%d\n",s1.roll);
    printf("CGPA obtained:%f\n",s1.cgpa);
    printf("\n");
    printf("Name of student :%s\n",s2.name);
    printf("Roll Number :%d\n",s2.roll);
    printf("CGPA obtained:%f\n",s2.cgpa);
    printf("\n");
    printf("Name of student :%s\n",s3.name);
    printf("Roll Number :%d\n",s3.roll);
    printf("CGPA obtained:%f\n",s3.cgpa);
    return 0;
}
