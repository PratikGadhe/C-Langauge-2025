/* 
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
*/
#include <stdio.h>
int main(){
    char row=5,column=6;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            printf("*");
        }printf("\n");
    }
    return 0;
}