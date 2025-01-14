//Write a function to convert celsius to fahrenheit.
//f=(c*0.18)+32

#include <stdio.h>

float celcius(float n);

int main(){
    float n;
    printf("Enter Celcius :");
    scanf("%f",&n);
    printf("Celcius (%f) in fehrenheit is :%f",n,celcius(n));

    return 0;
}

float celcius(float n){
    int fehrenheit = n*(9.0/5.0)+32;
    return fehrenheit;
}