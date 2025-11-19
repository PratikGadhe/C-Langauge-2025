//array of a structure 
//an array of structure in c is a collection of structure variables in a single array
//it is used when we want to store and multiple record where each record contains multiple fields 
#include <stdio.h>
struct student {
    int roll_no;
    char name[100];
    float marks;
};
int main(){
    int n;
    printf("Enter number of students : ");
    scanf("%d",&n);
    struct student arr[n];
    //input
    for(int i=0;i<n;i++){
        printf("Enter detail of student %d\n",i+1);
        printf("Enter roll number : ");
        scanf("%d",&arr[i].roll_no);
        printf("Enter student name : ");
        scanf("%s",arr[i].name);
        printf("Enter marks : ");
        scanf("%f",&arr[i].marks);
    }
    printf("\n");
    //output
    printf("---Students details---\n");
    for(int j=0;j<n;j++){
        printf("Roll Number : %d\n",arr[j].roll_no);
        printf("Student Name : %s\n",arr[j].name);
        printf("Marks obtained : %f\n",arr[j].marks);
        printf("\n");
    }
    return 0;
}