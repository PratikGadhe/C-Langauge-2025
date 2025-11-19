//will the address of the output be same ?
/*
void printAddress (int n);
int main();{
    int n = 4;
    printf("%p\n", &n) ;
    printAddress (n);
    return 0;
}
void printAddress (int n) {
    printf("%p\n", &n);
}
*/
#include <stdio.h>
void printAddress (int n);
int main(){
    int n = 4;
    printf("%p\n",&n);
    printAddress(n);
    return 0;
}
void printAddress (int n){
    printf("%p\n",&n);
}