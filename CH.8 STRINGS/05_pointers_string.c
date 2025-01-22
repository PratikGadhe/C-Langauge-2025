//string using pointers 
#include <stdio.h>
int main(){
    char *name = "PRATIK VILAS GADHE";
    puts(name);
    name= "SANKET VILAS GADHE";
    puts(name);
    char cannot_change[]="pratik";
    puts(cannot_change);
    //cannot_change="sanket";  it will show error coz string doesn't change the value once initiliazed
    return 0;
}