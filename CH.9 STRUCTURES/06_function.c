//structure in function
#include <stdio.h>
struct student{
    char *name;
    int roll;
    float cgpa;
};
void printinfo(struct student s1);
int main(){
    struct student std={"pratik vilas gadhe",57,7.5};
    printinfo(std);
    return 0;
}
void printinfo(struct student s1){
    printf("Student Information\n");
    printf("Name : %s\n",s1.name);
    printf("roll number: %d\n",s1.roll);
    printf("cgpa : %f\n",s1.cgpa);
}