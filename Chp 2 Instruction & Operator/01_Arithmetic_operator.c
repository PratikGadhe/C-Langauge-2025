//Arithmetic operators 
//a+b=c   a and b are operand , + and = are  operator , c is result 
#include <stdio.h>
int main(){
    int a =4;
    int b=3;
    int c=a+b;
    int d=a-b;
    int e=a*b;
    printf("The Value of a is %d and the value of b is %d\n",a,b);
    printf("The sum of a and b is %d\n",c);
    printf("the difference of a nd b is %d\n",d);
    printf("the multiplication of a and b is %d\n",e);
    printf("the remainder od and b is %d\n",a%b);
    return 0;
}
// there is no operator to perform exponentiation in C However later on we will math.h to perform exponentiation