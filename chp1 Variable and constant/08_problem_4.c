//calculate simple interest
#include <stdio.h>
int main(){
    int p,r,t;
    printf("Principle amount:");
    scanf("%d",&p);
    printf("Rate of interest:");
    scanf("%d",&r);
    printf("time:");
    scanf("%d",&t);
    int s;
    s=(p*r*t)/100;
    printf("simple interest :%d",s);
    return 0;
}