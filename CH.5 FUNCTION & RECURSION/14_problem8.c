//Write a function to calculate Percentage of a student from Marks in physics , chemistry & maths.

#include <stdio.h>

float percentage(float phy , float chem , float maths);
int main(){
    float phy,chem,maths;
    printf("Marks Obtained in physics:");
    scanf("%f",&phy);
    printf("Marks Obtained in chemistry:");
    scanf("%f",&chem);
    printf("Marks Obtained in maths:");
    scanf("%f",&maths);

    float marks;
    marks=phy+chem+maths;
    printf("Total Marks Obtained : %f\n",marks);
    printf("Percentage Obtained : %f\n",percentage(phy,chem,maths));

    return 0;
}
float percentage(float phy , float chem , float maths){
    float avg;
    avg=(phy+chem+maths)/3;
    return avg;
}