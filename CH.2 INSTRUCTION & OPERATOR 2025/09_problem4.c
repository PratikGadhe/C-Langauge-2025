//if a number is greater than 9 & less than 100 -> True 

#include <stdio.h>
int main(){
    int a;
    printf("Enter a Number :");
    scanf("%d",&a);
    printf("%d\n",a>9 && a<100);
    return 0;
}