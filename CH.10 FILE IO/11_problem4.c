//2number : a & b , are written in file . write a program to replace them with their sum
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("11_problem.txt","r");
    int a;
    fscanf(fptr,"%d",&a);
    printf("%d\n",a);
    int b;
    fscanf(fptr,"%d",&b);
    printf("%d\n",b);
    fclose(fptr);
    fptr=fopen("11_problem.txt","w");
    fprintf(fptr,"sum is %d\n",a+b);
    fclose(fptr);
    return 0;
}