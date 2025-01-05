//non zero number is excuted in c langauge

#include <stdio.h>
int main(){
    if(1){
        printf("this number is excetued in c\n");
    }
    if(2345){
        printf("this number is also excetued in c\n");
    }
    if(2.45){
        printf("this decimal is also excetued in c\n");
    }
    if('c'){
        printf("this character is also excetued in c\n");
    }
    if(0){
        printf("this zero value is  not excutued in c langauge !\n");
    }
    return 0;
}