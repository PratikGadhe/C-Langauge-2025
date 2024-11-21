//convert celcius into fehrenheit
#include <stdio.h>
int main(){
    int c;
    printf("Enter celcius:");
    scanf("%d",&c);
    float f;
    f=(c*1.8)+32.0;
    printf("Celcius into fehrenheit is %f",f);
    return 0;
}