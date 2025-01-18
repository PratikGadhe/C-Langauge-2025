//Print the value of 'i' from its pointer to pointer
#include <stdio.h>
int main(){
    int i;
    printf("Enter number:");
    scanf("%d",&i);
    int *ptr=&i;
    int **pptr=&ptr;  // '*' means value at address
    printf("the value of i is %d\n",**pptr);
    return 0;
}