#include <stdio.h>
int main(){
    int age;
    int *ptr =  &age;
    printf("memory location of age : %u\n",ptr);
    ptr++;
    printf("after ptr++ we get memory location of age as : %u\n",ptr);
    ptr--;
    printf("after ptr-- we get memory location of age as : %u\n",ptr);
    printf("\n");
    printf("\n");
    float price;
    float *ptr1 = &price;
    printf("Memory location of price : %u\n",ptr1);
    ptr1++;
    printf("after ptr1++ :%u\n",ptr1);
    ptr1--;
    printf("after ptr1-- %u\n",ptr1);
    printf("\n");
    char star = '*';
    char *ptr2 = &star;
    printf("memory location of star :%u\n",ptr2);
    ptr2++;
    printf("after ptr2++ %u\n",ptr2);
    ptr2--;
    printf("after ptr2-- %u\n",ptr2);
    return 0;
}