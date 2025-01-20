//input output in array
#include <stdio.h>
int main(){
    int marks[3];
    printf("Enter marks in Physics:");
    scanf("%d", &marks[0]);
    printf("Enter marks in chemistry:");
    scanf("%d", &marks[1]);
    printf("Enter marks in math:");
    scanf("%d",&marks[2]);
    printf("PHYSICS :%d , CHEMISTRY :%d ,MATH :%d\n",marks[0],marks[1],marks[2]);
    return 0;
}