//block of code that performs particular task is called as function

/*syntax 1 : function prototype (declaration)  -> void printhello();      >> tell the compiler 


  syntax 2 : function definition               -> void printhello(){
                                                        print("hello");   >> do the work
                                                   }
  syntax 3 : function call                     -> int main(){
                                                        printHello();     >> use the work 
                                                        return 0;
                                                        }

*/

#include <stdio.h> 

void printhello();   //declaration/prototype

int main(){
    printhello();    //function call
    return 0;
}

void printhello(){   //function define 
    printf("hello/n");  
}

