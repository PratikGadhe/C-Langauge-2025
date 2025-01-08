/*
    switch case is written in given format:

    switch(number) {
    case C1: //do something break;
    case C2 : //do something break;
    default: //do something
    
*/

#include <stdio.h>
int main(){
    int day;
    printf("Enter A Day (1-7):");
    scanf("%d",&day);
    switch (day){
        case 1 : printf("Monday\n");
                break;
        case 2: printf("Tuesday\n");
                break;
        case 3: printf("Wednesday\n");
                break;
        case 4: printf("Thrusday\n");
                break;
        case 5: printf("Friday\n");
                break;
        case 6: printf("Saturday\n");
                break;
        case 7: printf("Sunday\n");
                break;
        default : printf("Not A Valid day enter !!");
    }
    return 0;
}