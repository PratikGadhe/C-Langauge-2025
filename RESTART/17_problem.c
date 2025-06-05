//Write a program to enter price of 3 items & print their final cost with gst.
#include <stdio.h>
int main(){
    int item[3];
    float final;
    for(int i=0;i<3;i++){
        printf("Enter price of item %d : ",i+1);
        scanf("%d",&item[i]);
    }
    for(int i=0;i<3;i++){
        printf("Final Cost of product %d with gst is %f\n",(i+1),item[i]+(item[i]*0.18));
    }
    return 0;
}