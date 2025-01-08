/*
    ternary operator is wriiten in given format:

   -> Condition? doSomething if TRUE: doSomething if FALSE <-

*/

#include <stdio.h>
int main(){
    int age;
    printf("Enter Your Age :");
    scanf("%d",&age);

    (age>=18) ? printf("You Are Adult") : printf("You are not adult");
    return 0;
}