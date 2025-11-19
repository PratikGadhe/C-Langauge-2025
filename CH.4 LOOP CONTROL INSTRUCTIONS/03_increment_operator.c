// Increment operator 
/*
    //increment operator
    // ++i (pre increment)
    // i++ (post increment)
*/

#include <stdio.h>
int main(){
    int i=1;
    printf("%d\n",i++); //first the value of i is print then the ++ will increase the by 1
    printf("%d\n",i);

    printf("%d\n",++i);
    printf("%d\n",i);

    return 0;
}