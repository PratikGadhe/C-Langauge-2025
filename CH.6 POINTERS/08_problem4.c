////Swap 2 numbers, a & b.   using call by reference function
#include <stdio.h>
void swap(int *a,int *b);
int main(){
    int x=3,y=5;
    swap(&x,&y);
    printf("After Swapping A=%d & B=%d\n",x,y);
    return 0;
}
void swap(int *a,int *b){
    int t;
    t = *a ;  //t = &x
    *a = *b ; //*a = &y
    *b = t ;  //*b = &x
    // printf("After Swapping A=%d & B=%d\n",*a,*b);
}