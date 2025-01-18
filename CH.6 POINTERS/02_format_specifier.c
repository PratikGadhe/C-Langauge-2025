// format specifier for pointer
/*
    we will use %p for pointer
    printf("%p", &age); -> this will print address of age
    printf("%p", ptr);  -> this will print the address of variable ptr (means the value which is store in ptr)
    printf("%p", &ptr); -> this will print the address of ptr
*/

#include <stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    printf("address of age : %p\n",&age);  //address of age
    printf("address of age : %u\n",&age); 
    printf("address of ptr : %u\n",ptr);//this will also print the address of age coz it will print the address of value which is store in it 
    printf("address of ptr : %u\n",&ptr);  
    return 0;
}