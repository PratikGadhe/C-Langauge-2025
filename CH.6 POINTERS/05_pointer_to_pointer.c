/*
    pointer to pointer squence:
    int **pptr;
    char **pptr;
    float * *pptr;
*/

#include <stdio.h>
int main(){
    int price = 100;
    int *ptr = &price;
    int **pptr = &ptr;
    printf("%u\n",&price);
    printf("%u\n",ptr);
    printf("%u\n",pptr);
    return 0;
}