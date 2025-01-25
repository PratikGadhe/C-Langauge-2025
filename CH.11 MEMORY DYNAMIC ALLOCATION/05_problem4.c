//Create an array of size 5(using calloc) & enter its values from the user.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr=(int *) calloc(5,sizeof(int));
    for(int i = 0 ;i<5;i++){
        printf("Enter Number %d:",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\n");
    for(int j = 0 ;j<5;j++){
        printf("Value of number %d : %d\n",j+1,ptr[j]);
    }
    return 0;
}