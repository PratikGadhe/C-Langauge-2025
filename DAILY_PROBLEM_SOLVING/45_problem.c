//5. Develop a C program to swap two numbers using Pointer.
#include <stdio.h>
int main(){
    int n1,n2;      //taking number from user 
    int temp;       //creating temparory variable to store the value 
    int *p1=&n1;    //creating a pointer to store memory address of n1
    int *p2=&n2;    //creating a pointer to store memory address of n2
    printf("Enter Number 1 : ");
    scanf("%d",&n1);        //taking input for n1 value
    printf("Enter Number 2 : ");
    scanf("%d",&n2);        //taking input for n2 value

    printf("Numbers before swapping are : n1=%d and n2=%d\n",*p1,*p2);

    //swapping process

    temp=*p1;       //putting value of n1 into temp variable
    *p1=*p2;        //putting value of n2 into *p1 variable
    *p2=temp;       //putting value of temp variable into *p2 variable

    printf("Numbers after swapping are : n1=%d and n2=%d\n",*p1,*p2);
    return 0;
}   