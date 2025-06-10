//a string is a array means we can make as a string from araay as well as from the pointer 
// but if we use pointer to create a string the  we can change the value (reinitialize)
// and if are using array we cant change the value (cannot reinitialize)
#include <stdio.h>
int main(){
    char *name="Pratik Vilas Gadhe";
    puts(name);
    name="Sanket Vilas Gadhe";
    puts(name);
    return 0;
}