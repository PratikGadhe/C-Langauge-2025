//pointers in structure
#include <stdio.h>
struct student{
    char *name;
    int roll_no;
    float cgpa;
};
int main(){
    struct student s1={"pratik vilas gadhe",57,7.5};
    struct student *ptr = &s1;
    printf("Name of Student :%s\n", (*ptr).name);
    printf("Roll no of Student :%d\n",(*ptr).roll_no);
    printf("CGPA Obtained: %f\n",(*ptr).cgpa);

    printf("student.roll_no using ptr: %d\n",(*ptr).roll_no);
    printf("student.roll_no using arrow: %d\n",ptr->roll_no);
    return 0;
}