//Write a program to accept roll no and marks of 3 subjects of a student, Calculate total of 3 subjects and average 
#include <stdio.h>
int main(){
    int n[100];
    int phy[100];
    int math[100];
    int chem[100];
    printf("Enter Number of Students in a Class :");
    scanf("%d",&n[0]);
    for(int i = 0;i<n[0];i++){
        printf("Enter Marks of Roll no. %d :\n",i+1);
        printf("Physics : ");
        scanf("%d",&phy[i]);
        printf("Chemistry : ");
        scanf("%d",&chem[i]);
        printf("Maths : ");
        scanf("%d",&math[i]);
        printf("\n");
    }
    printf("\n");
    int total[100];
    for(int i=0;i<n[0];i++){
        printf("Roll no. %d\n",i+1);
        printf("Total Marks : %d\n",phy[i]+chem[i]+math[i]);
        printf("Average : %d\n",(phy[i]+chem[i]+math[i])/3);
    }

    return 0;
}