//Write a program to accept three numbers from user and print them in ascending and descending order in C language
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter A : ");
    scanf("%d",&a);
    printf("Enter B : ");
    scanf("%d",&b);
    printf("Enter C : ");
    scanf("%d",&c);
    if((a<b) && (a<c) && (b<c)){
        printf("Ascending Order : %d < %d < %d\n",a,b,c);
        printf("Descending order : %d > %d > %d\n",c,b,a);
    }
    else if((a<b) && (a<c) && (c<b)){
        printf("Ascending Order : %d < %d < %d\n",a,c,b);
        printf("Descending order : %d > %d > %d\n",b,c,a);
    }
    else if ((b<a) && (b<c) && (a<c)){
        printf("Ascending Order : %d < %d < %d\n",b,a,c);
        printf("Descending order : %d > %d > %d\n",c,a,b);
    }
    else if ((b<a) && (b<c) && (c<a)){
        printf("Ascending Order : %d < %d < %d\n",b,c,a);
        printf("Descending order : %d > %d > %d\n",a,c,b);
    }
    else if ((c<a) && (c<b) && (a<b)){
        printf("Ascending Order : %d < %d < %d\n",c,a,b);
        printf("Descending order : %d > %d > %d\n",b,a,c);
    }
    else{
        printf("Ascending Order : %d < %d < %d\n",c,b,a);
        printf("Descending order : %d > %d > %d\n",a,b,c);
    }
    return 0;
}