//Write a program to enter price of 3 items & print their final cost with gst.

#include <stdio.h>
int main(){
    float items[3];
    printf("Enter cost of product 1:");
    scanf("%f",&items[0]);
    printf("Enter cost of product 2:");
    scanf("%f",&items[1]);
    printf("Enter cost of product 3:");
    scanf("%f",&items[2]);
    float gst[3];
    gst[0]=items[0]+(items[0]*0.18);
    gst[1]=items[1]+(items[1]*0.18);
    gst[2]=items[2]+(items[2]*0.18);
    printf("\n");
    printf("Final Cost of Product 1:%f\n",gst[0]);
    printf("Final Cost of Product 2:%f\n",gst[1]);
    printf("Final Cost of Product 3:%f\n",gst[2]);
    return 0;
}