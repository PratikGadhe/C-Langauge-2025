//take student details as input and print it into a file
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("09_problem.txt","w");
    char name[100];
    int age;
    float cgpa;
    printf("Enter Your name :");
    scanf("%s",name);
    printf("Enter age :");
    scanf("%d",&age);
    printf("Enter Cgpa :");
    scanf("%f",&cgpa);

    fprintf(fptr,"NAME OF STUDENT \t AGE \t CGPA\n");
    fprintf(fptr,"%s \t %d \t %f \n",name,age,cgpa);
    // fprintf(fptr,"%s\t",name);
    // fprintf(fptr,"%d\t",age);
    // fprintf(fptr,"%f\t",cgpa);
    fclose(fptr);
    return 0;
}