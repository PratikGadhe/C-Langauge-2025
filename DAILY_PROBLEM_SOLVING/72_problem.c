/*
wap that compared two dates enter by user to store data usee structure as a datatype , date that contains 
three members namely date month year , date are equal then display message as " both dates are equal " 
otherwise "both dates are unequal"
*/
#include <stdio.h>
struct date{
    int date,month,year;
};
int main(){
    struct date d1,d2;
    printf("Enter first date : ");
    scanf("%d",&d1.date);
    printf("Enter First month : ");
    scanf("%d",&d1.month);
    printf("Enter First year : ");
    scanf("%d",&d1.year);
    printf("Enter Second date : ");
    scanf("%d",&d2.date);
    printf("Enter Second month : ");
    scanf("%d",&d2.month);
    printf("Enter Second year : ");
    scanf("%d",&d2.year);
    if(d1.date == d2.date && d1.month == d2.month & d1.year == d2.year){
        printf("Both dates are equal !\n");
    }
    else{
        printf("Both dates are unequal!\n");
    }
    return 0;
}