//memory dynamic allocation :It is a way to allocate memory to a data structure during the runtime.
/*
There are four functions through which we can allocate memory into the runtime program
1. malloc() 2.calloc() 3.free() 4.realloc()
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    //malloc function
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=6;
    ptr[3]=9;
    ptr[4]=15;
    for(int i =0 ;i<5;i++){
        printf("%d\n",ptr[i]);
    }
    printf("\n");

    float *ptr1;
    ptr1=(float *)calloc(5,sizeof(float));
    for(int j = 0;j<5;j++){
        printf("%f\n",ptr1[j]);
    }
    return 0;
}