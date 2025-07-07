//nested structure
#include <stdio.h>
#include <string.h>
struct detail{
    long prn;
    long mobile;
};
struct student{
    int roll_no;
    char name[100];
    float cgpa;
    struct detail dy;
};
int main(){
    struct student s1;
    s1.roll_no=57;
    strcpy(s1.name,"Pratik Gadhe");
    s1.cgpa=7.89;
    s1.dy.prn=24054491245048;
    s1.dy.mobile=9316221811;
    printf("Student detail\n");
    printf("Roll no : %d\n",s1.roll_no);
    printf("Student name : %s\n",s1.name);
    printf("Cgpa : %f\n",s1.cgpa);
    printf("PRN number : %ld\n",s1.dy.prn);
    printf("Mobile number : %ld\n",s1.dy.mobile);
    return 0;
}