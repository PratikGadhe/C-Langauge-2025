#include <stdio.h>
int main(){
    int marks[3];
    int avg;
    //input
    for(int i=0;i<3;i++){
        printf("Enter marks %d : ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<3;i++){
        printf("Marks %d : %d\n",i+1,marks[i]);
    }
    avg=(marks[0]+marks[1]+marks[2])/3;
    printf("Average : %d\n",avg);
    return 0;
}