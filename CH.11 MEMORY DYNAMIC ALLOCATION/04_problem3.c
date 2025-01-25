//Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr=(int *) calloc(5,sizeof(int));
    printf("Enter numbers (5) :\n");
    for(int i = 0 ; i<5 ;i++){
        printf("Enter Number %d :",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    ptr=(int *) realloc(ptr,8);

    for(int i = 0 ; i<8 ;i++){
        printf("Enter Number %d :",i+1);
        scanf("%d",&ptr[i]);
    }

    for(int j = 0 ;j<8 ;j++){
        printf("Number %d : %d\n",j+1,ptr[j]);
    }
    return 0;
}