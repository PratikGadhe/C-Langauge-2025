/*in string we can take input with the help of scanf
but it won't able to give output for a sentence 
it will only print the first worf of sentence
thats why we will use gets() function for input &
puts() function for output but this functions are older now 
and chances are high to get hacked using this function thats why 
we will use fgets(str,n,file); function ... 
*/
#include <stdio.h>
int main(){
    char str[100];
    printf("Enter Your full name :");
    fgets(str,100,stdin);
    printf("Your Full Name is ");
    puts(str);
    return 0;
}