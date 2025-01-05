//Write a program to find grade of a student given his marks based on below:
/* 90 - 100 => A
80 - 90 => B
70 - 80 => C
60-70 => D
50 - 60 => E
<50
=> F */

#include <stdio.h>
int main(){
    float a;
    printf("Enter mark:");
    scanf("%f",&a);
    if(a>90 && a<100){
        printf("Student got A grade\n");
    }
    else if(a>80 && a<90){
        printf("Student got B grade\n");
    }
    else if(a>70 && a<80){
        printf("Student got C grade\n");
    }
    else if(a>60 && a<70){
        printf("Student got D grade\n");
    }
    else if(a>50 && a<60){
        printf("Student got E grade\n");
    }
    else{
        printf("Better luck next time\n");
    }
    return 0;
}