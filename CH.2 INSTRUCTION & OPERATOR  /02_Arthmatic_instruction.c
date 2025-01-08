// There are three types of instruction in c langauge 
/*
    1. Type declaration instruction
    2. Arthmatic Instruction 
    3. Control Instruction
*/

//2. Arthmatic instruction

#include <stdio.h>
#include <math.h>  //header
int main(){
    int a;
    int b,c;
    b=c=1;
    int sum=b+c;
    int multiply=b*c;
    int div=b/c;  //valid operators
    int power=pow(sum,b);
    printf("%d\n",power);

    /*
        INVALID OPERATORS
        b+c=a
        a=bc
        a=b^c
    */
   int p;
   p=5%2;
   printf("%d\n",p);
    return 0;
}