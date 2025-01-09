//Keep taking numbers as input from user until user enters a number which is multiple of 7.

#include <stdio.h>
int main(){
    int i;
    printf("Enter Numbers :\n");
    do{
        scanf("%d",&i);
        if(i%7 == 0){
            break;
        }
    } while(1);
    printf("thank you !\n");
    return 0;
}