//initialize in structures
#include <stdio.h>
struct student{
    char *name;
    int roll;
    float cgpa;
};
int main(){
    struct student s1={"pratik vilas gadhe",57,7.5};
    struct student s2={"Aaditya balkumar aadhave",32,8.5};
    struct student s3={"krushna rakesh bhavsar",44,9.5}; 

    printf("Name of student:%s\n",s1.name);
    printf("roll number:%d\n",s1.roll);
    printf("CGPA obtain :%f\n",s1.cgpa);
    printf("\n");
    printf("Name of student:%s\n",s2.name);
    printf("roll number:%d\n",s2.roll);
    printf("CGPA obtain :%f\n",s2.cgpa);
    printf("\n");
    printf("Name of student:%s\n",s3.name);
    printf("roll number:%d\n",s3.roll);
    printf("CGPA obtain :%f\n",s3.cgpa);
    return 0;
}