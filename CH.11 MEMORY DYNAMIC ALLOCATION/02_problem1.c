//WAP to allocate memory to store 5 prices.
#include <stdio.h>
#include <stdlib.h>
int main(){
    float *price;
    price=(float *) malloc(5*sizeof(float));
    //input
    for(int i=0;i<5;i++){
        printf("Enter Price of product %d : ",i+1);
        scanf("%f",&price[i]);
    }
    printf("\n");
    for(int j=0;j<5;j++){
        printf("Price of product %d : %f\n",j+1,price[j]);
    }
    return 0;
}