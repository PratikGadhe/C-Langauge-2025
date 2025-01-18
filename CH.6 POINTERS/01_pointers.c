//pointers is a variable that stores the memory address of another variable
/*
    syntax use to write pointer:
    int age = 19;
    int *ptr = &age;  *ptr means value at address and &age means address of age(memory address)
    int _age = *ptr;
*/
#include <stdio.h>
int main(){
    int age=19;
    int *ptr = &age;
    int _age = *ptr;
    printf("Value at address :%d\n",_age);
    printf("Memory address : %d\n",*ptr);
    return 0;
}