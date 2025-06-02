//Write 2 functions - one to print "Hello" & second to print "good bye".
#include <stdio.h>
void printhello();
void printgoodbye();

int main(){
    int a;
    printf("Press 1 to start & press 2 to end : ");
    scanf("%d",&a);
    if(a==1){
        printhello();
    }
    else if(a==2){
        printgoodbye();
    }
    else{
        printf("Wrong Number Entered !");
    }
    return 0;
}

void printhello(){
    printf("Hello !\n");
}

void printgoodbye(){
    printf("Good Bye !\n");
}