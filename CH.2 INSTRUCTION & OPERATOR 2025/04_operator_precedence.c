/*
    operator precedence
    1. * / %
    2. + -
    3. =
*/
/* 
    if same operators use in the question for example
    x=4*3/6*2 
    at that time we use ASSOCIATIVITY i.e solving question from left to right 
    ANSWER : 4*3=12... 12/6=2... 2*2= 4 FINAL ANSWER = 4
*/
#include <stdio.h>
int main(){
    int a= 4+9*10;
    printf("%d\n",a);
    int b=4*3/6*2;
    printf("%d\n",b);
    return 0;
}