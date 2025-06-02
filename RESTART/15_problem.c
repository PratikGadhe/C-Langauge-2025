
#include <stdio.h>
int swap(int *a, int *b);
int main(){
    int a,b;
    a=5,b=8;
    swap(&a,&b);
    printf("After swapping : a=%d , b=%d\n",a,b);
    return 0;
}
int swap(int *a, int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
    return 0;
}