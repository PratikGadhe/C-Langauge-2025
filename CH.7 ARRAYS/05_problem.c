#include <stdio.h>
int main(){
    int age =19;
    int _age =20;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("age :%u & _age:%u\n",ptr,_ptr);
    printf("Difference :%u\n",ptr - _ptr);
    _ptr=&age;
    printf("comparision :%u\n",ptr == _ptr);
    return 0;
}