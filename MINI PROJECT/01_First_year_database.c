#include <stdio.h>
#include <string.h>
//main branch first year -> departments -> branches
typedef struct computer_engineers{
    char first_name[100];
    char middle_name[100];
    char last_name[100];
    int roll_no;
    int age;
    float cgpa;
}coe;
typedef struct data_science{
    char first_name[100];
    char middle_name[100];
    char last_name[100];
    int roll_no;
    int age;
    float cgpa;
}ds;
int main(){
    int user;
    if(user){
        printf("\n");
        printf("------ ENTER DETAILS OF COMPUTER ENGINEERING BRANCH 1 ------\n");
        printf("\n");
        int n;
        printf("Enter Number of Students in Computer 1 Branch :");
        scanf("%d",&n);
        coe co1[n];
        //TAKING INPUT OF CO1 BRANCH STUDENTS DETAILS
        for(int i = 0 ;i<=(n-1);i++){
            printf("Enter Details of Student %d\n",i+1);
            printf("Enter Your First Name :");
            scanf("%s",co1[i].first_name);
            printf("Enter Your Middle Name :");
            scanf("%s",co1[i].middle_name);
            printf("Enter Your Last Name :");
            scanf("%s",co1[i].last_name);
            printf("Enter Your Roll Number :");
            scanf("%d",&co1[i].roll_no);
            printf("Enter Your Age :");
            scanf("%d",&co1[i].age);
            printf("Enter Your 1st Year CGPA :");
            scanf("%f",&co1[i].cgpa);
            printf("\n");
        }
        printf("\n");
        printf("------ ENTER DETAILS OF COMPUTER ENGINEERING BRANCH 2 ------\n");
        printf("\n");
        int n1;
        printf("Enter Number of Students in Computer 2 Branch :");
        scanf("%d",&n1);
        coe co2[n1];
        //TAKING INPUT OF CO2 BRANCH STUDENTS DETAILS
        for(int i = 0 ;i<=(n1-1);i++){
            printf("Enter details of Student %d\n",i+1);
            printf("Enter Your First Name :");
            scanf("%s",co2[i].first_name);
            printf("Enter Your Middle Name :");
            scanf("%s",co2[i].middle_name);
            printf("Enter Your Last Name :");
            scanf("%s",co2[i].last_name);
            printf("Enter Your Roll Number :");
            scanf("%d",&co2[i].roll_no);
            printf("Enter Your Age :");
            scanf("%d",&co2[i].age);
            printf("Enter Your 1st Year CGPA :");
            scanf("%f",&co2[i].cgpa);
            printf("\n");
        }
        printf("\n");
        printf("------ ENTER DETAILS OF COMPUTER ENGINEERING BRANCH 3 ------\n");
        printf("\n");
        int n2;
        printf("Enter Number of Students in Computer 3 Branch :");
        scanf("%d",&n2);
        coe co3[n2];
        //TAKING INPUT OF CO3 BRANCH STUDENTS DETAILS
        for(int i = 0 ;i<=(n2-1);i++){
            printf("Enter details of Student %d\n",i+1);
            printf("Enter Your First Name :");
            scanf("%s",co3[i].first_name);
            printf("Enter Your Middle Name :");
            scanf("%s",co3[i].middle_name);
            printf("Enter Your Last Name :");
            scanf("%s",co3[i].last_name);
            printf("Enter Your Roll Number :");
            scanf("%d",&co3[i].roll_no);
            printf("Enter Your Age :");
            scanf("%d",&co3[i].age);
            printf("Enter Your 1st Year CGPA :");
            scanf("%f",&co3[i].cgpa);
            printf("\n");
        }
        printf("\n");

        //OUTPUT OF CO1 BRNACH STUDENTS DETAILS 

        //branch 1
        FILE *fptr;
        fptr=fopen("02_computer_branch.txt","w");
        fprintf(fptr,"------ DETAILS OF COMPUTER ENGINEERING BRANCH 1 ------");
        fprintf(fptr,"\n");
        fprintf(fptr,"NAME OF STUDENT \t \t ROLL NUMBER \t \tAGE \t \t CGPA OBTAINED\n");
        for(int i = 0 ; i<=(n-1);i++){
            fprintf(fptr,"%s ",co1[i].first_name);
            fprintf(fptr,"%s ",co1[i].middle_name);
            fprintf(fptr,"%s \t \t",co1[i].last_name);
            fprintf(fptr,"%d \t \t",co1[i].roll_no);
            fprintf(fptr,"%d \t \t",co1[i].age);
            fprintf(fptr,"%f \n",co1[i].cgpa);
            }
        //branch 2
        fprintf(fptr,"\n");
        fprintf(fptr,"------ DETAILS OF COMPUTER ENGINEERING BRANCH 2 ------");
        fprintf(fptr,"\n");
        fprintf(fptr,"NAME OF STUDENT \t \t ROLL NUMBER \t \tAGE \t \t CGPA OBTAINED\n");
        for(int i = 0 ; i<=(n-1);i++){
            fprintf(fptr,"%s ",co2[i].first_name);
            fprintf(fptr,"%s ",co2[i].middle_name);
            fprintf(fptr,"%s \t \t",co2[i].last_name);
            fprintf(fptr,"%d \t \t",co2[i].roll_no);
            fprintf(fptr,"%d \t \t",co2[i].age);
            fprintf(fptr,"%f \n",co2[i].cgpa);
            }
        fprintf(fptr,"\n");
        //branch 3
        fprintf(fptr,"\n");
        fprintf(fptr,"------ DETAILS OF COMPUTER ENGINEERING BRANCH 3 ------");
        fprintf(fptr,"\n");
        fprintf(fptr,"NAME OF STUDENT \t \t ROLL NUMBER \t \tAGE \t \t CGPA OBTAINED\n");
        for(int i = 0 ; i<=(n-1);i++){
            fprintf(fptr,"%s ",co3[i].first_name);
            fprintf(fptr,"%s ",co3[i].middle_name);
            fprintf(fptr,"%s \t \t",co3[i].last_name);
            fprintf(fptr,"%d \t \t",co3[i].roll_no);
            fprintf(fptr,"%d \t \t",co3[i].age);
            fprintf(fptr,"%f \n",co3[i].cgpa);
            }
        fprintf(fptr,"\n");
        fclose(fptr);
    }
    if(user){
        printf("\n");
        printf("------ ENTER DETAILS OF DATA SCIENCE BRANCH 1 ------\n");
        printf("\n");
        int n;
        printf("Enter Number of Students in Data Science 1 Branch  :");
        scanf("%d",&n);
        ds ds1[n];
        //TAKING INPUT OF DS1 BRANCH STUDENTS DETAILS
        for(int i = 0 ;i<=(n-1);i++){
            printf("Enter details of Student %d\n",i+1);
            printf("Enter Your First Name :");
            scanf("%s",ds1[i].first_name);
            printf("Enter Your Middle Name :");
            scanf("%s",ds1[i].middle_name);
            printf("Enter Your Last Name :");
            scanf("%s",ds1[i].last_name);
            printf("Enter Your Roll Number :");
            scanf("%d",&ds1[i].roll_no);
            printf("Enter Your Age :");
            scanf("%d",&ds1[i].age);
            printf("Enter Your 1st Year CGPA :");
            scanf("%f",&ds1[i].cgpa);
            printf("\n");
        }
        printf("\n");
        printf("------ ENTER DETAILS OF DATA SCIENCE BRANCH 2 ------\n");
        printf("\n");
        int n1;
        printf("Enter Number of Students in  Data Science  2 Branch :");
        scanf("%d",&n1);
        ds ds2[n1];
        //TAKING INPUT OF DS2 BRANCH STUDENTS DETAILS
        for(int i = 0 ;i<=(n1-1);i++){
            printf("Enter details of Student %d\n",i+1);
            printf("Enter Your First Name :");
            scanf("%s",ds2[i].first_name);
            printf("Enter Your Middle Name :");
            scanf("%s",ds2[i].middle_name);
            printf("Enter Your Last Name :");
            scanf("%s",ds2[i].last_name);
            printf("Enter Your Roll Number :");
            scanf("%d",&ds2[i].roll_no);
            printf("Enter Your Age :");
            scanf("%d",&ds2[i].age);
            printf("Enter Your 1st Year CGPA :");
            scanf("%f",&ds2[i].cgpa);
            printf("\n");
        }
        printf("\n");

        //OUTPUT OF DS1 BRANCH STUDENTS DETAILS 
        FILE *fptr1;
        fptr1=fopen("03_data_science_branch.txt","w");
        //branch 1
        fprintf(fptr1,"------ DETAILS OF DATA SCIENCE BRANCH 1 ------");
        fprintf(fptr1,"\n");
        fprintf(fptr1,"NAME OF STUDENT \t \t ROLL NUMBER \t \tAGE \t \t CGPA OBTAINED\n");
        for(int i = 0 ; i<=(n-1);i++){
            fprintf(fptr1,"%s ",ds1[i].first_name);
            fprintf(fptr1,"%s ",ds1[i].middle_name);
            fprintf(fptr1,"%s \t \t",ds1[i].last_name);
            fprintf(fptr1,"%d \t \t",ds1[i].roll_no);
            fprintf(fptr1,"%d \t \t",ds1[i].age);
            fprintf(fptr1,"%f \n",ds1[i].cgpa);
            }
        //branch 2
        fprintf(fptr1,"\n");
        fprintf(fptr1,"------ DETAILS OF COMPUTER ENGINEERING BRANCH 3 ------");
        fprintf(fptr1,"\n");
        fprintf(fptr1,"NAME OF STUDENT \t \t ROLL NUMBER \t \tAGE \t \t CGPA OBTAINED\n");
        for(int i = 0 ; i<=(n-1);i++){
            fprintf(fptr1,"%s ",ds2[i].first_name);
            fprintf(fptr1,"%s ",ds2[i].middle_name);
            fprintf(fptr1,"%s \t \t",ds2[i].last_name);
            fprintf(fptr1,"%d \t \t",ds2[i].roll_no);
            fprintf(fptr1,"%d \t \t",ds2[i].age);
            fprintf(fptr1,"%f \n",ds2[i].cgpa);
            }
        fprintf(fptr1,"\n");
        fclose(fptr1);
    } 
return 0;
}