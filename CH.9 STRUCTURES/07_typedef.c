//with the help of typedef keyword we can gice a short name to our structure variable 

#include <stdio.h>
typedef struct computerengineeringstudent{
    char *name;
    int roll;
    float cgpa;
} coe; //shortform (alias)
int main(){
    coe s1;
    s1.name="pratik vilas gadhe";
    s1.roll=57;
    s1.cgpa=7.5;
    printf("name:%s\n",s1.name);
    printf("roll number:%d\n",s1.roll);
    printf("cgpa :%f\n",s1.cgpa);
    return 0;
}