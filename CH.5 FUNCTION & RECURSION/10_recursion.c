//Print "Hello World" 5 times using recursion

#include <stdio.h>

void printhello(int count);

int main(){
    printhello(10);
    return 0;
}

void printhello(int count){
    if(count == 0){
        return ;
    }
    printf("Hello world\n");
    printhello(count - 1);
}