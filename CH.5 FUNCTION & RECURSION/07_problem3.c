//print the cost price of the product purchased by user by adding 18% of gst in their final cost price

#include <stdio.h>      //header line

void final(float value);  //prototype

int main(){         //function call
    float product_cost;
    printf("Enter Cost of product :");
    scanf("%f",&product_cost);
    printf("ORIGINAL PRICE :%f\n",product_cost);
    final(product_cost);
    return 0;
}

void final(float value){     //definition
    value=value+(0.18*value);
    printf("PRICE AFTER GST :%f\n",value);
}