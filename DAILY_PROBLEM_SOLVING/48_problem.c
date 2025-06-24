//7. Develop a C Program based on Fibonacci series while loop or do-while loop.
//USING DO-WHILE LOOP 
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    int f1=0;
    int f2=1;
    printf("Fibonacci Series for n=%d terms are :\n",n);
    printf("%d\t%d\t",f1,f2);
    int i=2;
    do{
        int f3=f1+f2;
        printf("%d\t",f3);
        f1=f2;
        f2=f3;
        i++;
    }while (i<n);
    printf("\n");
    return 0;
}