//Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by a single space.
/*
    4 4 4 4 4 4 4       2 2 2
    4 3 3 3 3 3 4       2 1 2
    4 3 2 2 2 3 4       2 2 2
    4 3 2 1 2 3 4   
    4 3 2 2 2 3 4   
    4 3 3 3 3 3 4   
    4 4 4 4 4 4 4 
*/
#include <stdio.h>
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);
    for(int i = 0 ;i<(2*n-1);i++){
        printf("%d",n);
    }
    return 0;
}