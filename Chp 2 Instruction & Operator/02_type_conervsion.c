//type conversion in c
/*In C : 1.int and int gives the value in integer form
2. int and float gives float value
3. float and float gives float value  */
#include <stdio.h>
int main(){
    int a=9;
    int b=2;
    printf("The division of a,b is %d",a/b);  //correct anser is 4.5 but it will give 4

    float c=9.0;
    int d=2;
    printf("The division of c,d is %f",c/d); //now it will the correct answer as 4.5 !

    int e=6.7; //type compability
    printf("the value of e is %d",e); //value after decimal will be removed because of integer 
    return 0;
}