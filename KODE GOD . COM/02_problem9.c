//Write a program to accept three numbers from user and print them in ascending and descending order in C language
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter Three Numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b && a<=c){
        if(b<=c){
            printf("Ascending Order : %d,%d,%d\n",a,b,c);
            printf("Dscending Order : %d,%d,%d\n",c,b,a);
        }else{
            printf("Ascending Order : %d,%d,%d\n",a,c,b);
            printf("Descending Order : %d,%d,%d\n",b,c,a);
        }
    }else if(b<=a && b<=c){
        if(a<=c){
            printf("Ascending Order : %d,%d,%d\n",b,a,c);
            printf("Dscending Order : %d,%d,%d\n",c,a,b);
        }else{
            printf("Ascending Order : %d,%d,%d\n",b,c,a);
            printf("Dscending Order : %d,%d,%d\n",a,c,b);
        }
    }else if(c<=a && c<=b){
        if(a<=b){
            printf("Ascending Order : %d,%d,%d\n",c,a,b);
            printf("Dscending Order : %d,%d,%d\n",b,a,c);
        }else{
            printf("Ascending Order : %d,%d,%d\n",c,b,a);
            printf("Dscending Order : %d,%d,%d\n",a,c,b);
        }
    }
    return 0;
}