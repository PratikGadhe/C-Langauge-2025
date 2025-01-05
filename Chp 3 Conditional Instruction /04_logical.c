// how logical operator works (and,or,not)

#include <stdio.h>
int main(){
    int a=2345,b=0;

    /*In C non zero value is considered as true and its give the output as 1
    and Zero value is considered as false and it gives the output as 0*/

    printf("the value of a and b is %d\n",a && b); //output will be 0 because 1234 is non zero i.e is True(1) and 0 is False(0) 
    printf("the value of a or b is %d\n",a||b);// output will be 1 because 1234 is non zero and atleast one statement is true therefore 1
    printf("the value of not(a) is %d\n",!(a));
    return 0;
}