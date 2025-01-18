//Swap 2 numbers, a & b.   using call by value function
#include <stdio.h>
void swap(int a,int b);
int main(){
    int x=3,y=5;
    swap(x,y);
    printf("After swapping A = %d & B = %d\n",x,y);  // this will not swap the value 
    return 0;
}
//using call by value function 
void swap(int a, int b){
    int t; //t==0
    t = a; 
    a = b; 
    b = t; 
    printf("After swapping A = %d & B = %d\n",a,b);  //this will swap the value 

}