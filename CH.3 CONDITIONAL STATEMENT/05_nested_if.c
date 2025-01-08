//we can use multiple if statement inside the if statement ,
//Also we can use it into else statement and thats we can it as nested if

#include <stdio.h>
int main(){
    int number;
    printf("Enter A Number :");
    scanf("%d",&number);

    if(number >= 0){
        printf("Number is positive \n");
        if( number % 2 == 0 ){
            printf("Number is even \n");
        }
        else{
            printf("Number is odd \n");
        }
    }
    else{
        printf("Number is Negative \n");
    }
    return 0;
}