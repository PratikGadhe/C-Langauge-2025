//Keep taking numbers as input from user until user enters an odd number

#include <stdio.h>
int main(){
    int i;
    printf("Enter Numbers :\n");
    do{
        scanf("%d",&i);
        if(i%2 != 0){
            break;
        }
    } while(1);
    printf("thank you !\n");
    return 0;
}