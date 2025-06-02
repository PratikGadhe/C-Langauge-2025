#include <stdio.h>
void calculateprice(float value);

int main(){
    float value;
    printf("Enter Price : ");
    scanf("%f",&value);

    calculateprice(value);
    
    return 0;
}
void calculateprice(float value){
    value = value + (0.18*100);
    printf("Price after gst : %f rs\n",value);
}