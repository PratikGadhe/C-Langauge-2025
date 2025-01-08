//Take a number(n) from user & output its cube(n*n*n).

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    
    int cube=n*n*n;
    printf("Cube of entered number is %d\n",cube);
    return 0;
}