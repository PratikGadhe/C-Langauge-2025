#include <stdio.h>
#include <string.h>
//main branch first year -> departments -> branches
typedef struct computer_engineers{
    char first_name[100];
    char middle_name[100];
    char last_name[100];
    int prn_no;
    int mobile_no;
}coe;
typedef struct data_science{
    char first_name[100];
    char middle_name[100];
    char last_name[100];
    int prn_no;
    int mobile_no;
}ds;
int main(){
    int user;
    printf("PRESS '1' FOR COMPUTER STUDENTS & '2' FOR DATA SCIENCE :");
    scanf("%d",&user);
    if(user == 1){
        printf("------ ENTER DETAILS OF COMPUTER ENGINEERING BRANCH 1 ------\n");
        int n;
        printf("Enter Number of students in Computer 1 Branch :");
        scanf("%d",&n);
        coe co1[n];
        //TAKING INPUT OF CO1 BRANCH STUDENTS DETAILS
        for(int i = 0 ;i<=(n-1);i++){
            printf("Enter details of roll no. %d\n",i+1);
            printf("Enter Your First Name :");
            scanf("%s",co1[i].first_name);
            printf("Enter Your Middle Name :");
            scanf("%s",co1[i].middle_name);
            printf("Enter Your Last Name :");
            scanf("%s",co1[i].last_name);
            printf("Enter PRN number :");
            scanf("%d",&co1[i].prn_no);
            printf("Enter Mobile number :");
            scanf("%d",&co1[i].mobile_no);
            printf("\n");
        }
        printf("\n");
        printf("------ ENTER DETAILS OF COMPUTER ENGINEERING BRANCH 2 ------\n");
        int n1;
        printf("Enter Number of students in Computer 2 Branch :");
        scanf("%d",&n1);
        coe co2[n1];
        //TAKING INPUT OF CO1 BRANCH STUDENTS DETAILS
        for(int i = 0 ;i<=(n1-1);i++){
            printf("Enter details of roll no. %d\n",i+1);
            printf("Enter Your First Name :");
            scanf("%s",co2[i].first_name);
            printf("Enter Your Middle Name :");
            scanf("%s",co2[i].middle_name);
            printf("Enter Your Last Name :");
            scanf("%s",co2[i].last_name);
            printf("Enter PRN number :");
            scanf("%d",&co2[i].prn_no);
            printf("Enter Mobile number :");
            scanf("%d",&co2[i].mobile_no);
            printf("\n");
        }
        printf("\n");
        printf("------ ENTER DETAILS OF COMPUTER ENGINEERING BRANCH 3 ------\n");
        int n2;
        printf("Enter Number of students in Computer 3 Branch :");
        scanf("%d",&n2);
        coe co3[n2];
        //TAKING INPUT OF CO1 BRANCH STUDENTS DETAILS
        for(int i = 0 ;i<=(n2-1);i++){
            printf("Enter details of roll no. %d\n",i+1);
            printf("Enter Your First Name :");
            scanf("%s",co3[i].first_name);
            printf("Enter Your Middle Name :");
            scanf("%s",co3[i].middle_name);
            printf("Enter Your Last Name :");
            scanf("%s",co3[i].last_name);
            printf("Enter PRN number :");
            scanf("%d",&co3[i].prn_no);
            printf("Enter Mobile number :");
            scanf("%d",&co3[i].mobile_no);
            printf("\n");
        }
        printf("\n");

        //OUTPUT OF CO1 BRNACH STUDENTS DETAILS 

        //branch 1
        printf("------ DETAILS OF COMPUTER ENGINEERING BRANCH 1 ------");
        printf("\n");
        printf("NAME OF STUDENT \t PRN NUMBER \t MOBILE NUMBER\n");
        for(int j =0 ; j<=(n-1);j++){
            printf("%s %s %s \t %d \t %d\n",co1[j].first_name,co1[j].middle_name,co1[j].last_name,co1[j].prn_no,co1[j].mobile_no);
            }
        //branch 2
        printf("\n");
        printf("------ DETAILS OF COMPUTER ENGINEERING BRANCH 2 ------");
        printf("\n");
        printf("NAME OF STUDENT \t PRN NUMBER \t MOBILE NUMBER\n");
        for(int j =0 ; j<=(n-1);j++){
            printf("%s %s %s \t %d \t %d\n",co2[j].first_name,co2[j].middle_name,co2[j].last_name,co2[j].prn_no,co2[j].mobile_no);
            }
        printf("\n");
        //branch 2
        printf("\n");
        printf("------ DETAILS OF COMPUTER ENGINEERING BRANCH 3 ------");
        printf("\n");
        printf("NAME OF STUDENT \t PRN NUMBER \t MOBILE NUMBER\n");
        for(int j =0 ; j<=(n-1);j++){
            printf("%s %s %s \t %d \t %d\n",co3[j].first_name,co3[j].middle_name,co3[j].last_name,co3[j].prn_no,co3[j].mobile_no);
            }
        printf("\n");
    }
    else if(user == 2){
        printf("------ ENTER DETAILS OF DATA SCIENCE BRANCH 1 ------\n");
        int n;
        printf("Enter Number of students in Data Science 1 Branch :");
        scanf("%d",&n);
        ds ds1[n];
        //TAKING INPUT OF DS1 BRANCH STUDENTS DETAILS
        for(int i = 0 ;i<=(n-1);i++){
            printf("Enter details of roll no. %d\n",i+1);
            printf("Enter Your First Name :");
            scanf("%s",ds1[i].first_name);
            printf("Enter Your Middle Name :");
            scanf("%s",ds1[i].middle_name);
            printf("Enter Your Last Name :");
            scanf("%s",ds1[i].last_name);
            printf("Enter PRN number :");
            scanf("%d",&ds1[i].prn_no);
            printf("Enter Mobile number :");
            scanf("%d",&ds1[i].mobile_no);
            printf("\n");
        }
        printf("\n");
        printf("------ ENTER DETAILS OF DATA SCIENCE BRANCH 2 ------\n");
        int n1;
        printf("Enter Number of students in  Data Science  2 Branch :");
        scanf("%d",&n1);
        ds ds2[n1];
        //TAKING INPUT OF DS2 BRANCH STUDENTS DETAILS
        for(int i = 0 ;i<=(n1-1);i++){
            printf("Enter details of roll no. %d\n",i+1);
            printf("Enter Your First Name :");
            scanf("%s",ds2[i].first_name);
            printf("Enter Your Middle Name :");
            scanf("%s",ds2[i].middle_name);
            printf("Enter Your Last Name :");
            scanf("%s",ds2[i].last_name);
            printf("Enter PRN number :");
            scanf("%d",&ds2[i].prn_no);
            printf("Enter Mobile number :");
            scanf("%d",&ds2[i].mobile_no);
            printf("\n");
        }
        printf("\n");

        //OUTPUT OF DS1 BRANCH STUDENTS DETAILS 

        //branch 1
        printf("------ DETAILS OF DATA SCIENCE BRANCH 1 ------");
        printf("\n");
        printf("NAME OF STUDENT \t PRN NUMBER \t MOBILE NUMBER\n");
        for(int j =0 ; j<=(n-1);j++){
            printf("%s %s %s \t %d \t %d\n",ds1[j].first_name,ds1[j].middle_name,ds1[j].last_name,ds1[j].prn_no,ds1[j].mobile_no);
            }
        //branch 2
        printf("\n");
        printf("------ DETAILS OF COMPUTER ENGINEERING BRANCH 3 ------");
        printf("\n");
        printf("NAME OF STUDENT \t PRN NUMBER \t MOBILE NUMBER\n");
        for(int j =0 ; j<=(n-1);j++){
            printf("%s %s %s \t %d \t %d\n",ds2[j].first_name,ds2[j].middle_name,ds2[j].last_name,ds2[j].prn_no,ds2[j].mobile_no);
            }
        printf("\n");
    }
    else{
        printf("YOU ENTER INVALID NUMBER (PRESS '1' or '2')!");
    }  
return 0;
}