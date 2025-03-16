//Write a program to accept roll no and marks of 3 subjects of a student, Calculate total of 3 subjects and average 
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    int phy[100];
    int math[100];
    int chem[100];
    printf("Enter Number of Students in a Class :");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        printf("Enter Marks of Roll no. %d :\n",i);
        printf("Physics : ");
        scanf("%d",&phy[i]);
        printf("Chemistry : ");
        scanf("%d",&chem[i]);
        printf("Maths : ");
        scanf("%d",&math[i]);
        printf("\n");
    }
    printf("\n");
    char permission[]="yes";
    char input[20];
    printf("Do You Want to See Database of Students ?\n");
    printf("Enter yes / no : ");
    printf("\n");
    scanf("%s",input);
    if(strcmp(input,permission)== 0){
        int total[100];
        for(int i=1;i<=n;i++){
            printf("Roll no. %d\n",i);
            printf("Total Marks : %d\n",phy[i]+chem[i]+math[i]);
            printf("Average : %d\n",(phy[i]+chem[i]+math[i])/3);
        }
    }
    else{
        printf("Thank You for storing data \n");
    }

    return 0;
}