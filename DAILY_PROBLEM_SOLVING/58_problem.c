//Write a Program to accept two numbers and a operator (+, -, *, / from user and complete that particular operation only in C language
#include <stdio.h>
int main(){
    int n1,n2;
    char operator;
    int result;
    printf("Enter operator (+ - * /) : ");
    scanf("%c",&operator);
    printf("Enter number 1 : ");
    scanf("%d",&n1);
    printf("Enter number 2 : ");
    scanf("%d",&n2);
    switch(operator){
        case '+' :{
            result=n1+n2;
            printf("Result : %d + %d = %d\n",n1,n2,result);
            break;
        }
        case '-' :{
            result=n1-n2;
            printf("Result : %d - %d = %d\n",n1,n2,result);
            break;
        }
        case '*' :{
            result=n1*n2;
            printf("Result : %d * %d = %d\n",n1,n2,result);
            break;
        }
        case '/' :{
            result=n1-n2;
            printf("Result : %d / %d = %d\n",n1,n2,result);
            break;
        }
        default : {
            printf("You Enter a wrong operator !\n");
        }
    }
    return 0;
}