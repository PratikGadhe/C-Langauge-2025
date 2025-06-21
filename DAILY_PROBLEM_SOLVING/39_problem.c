// Write a program to print following outputs in C language
/*
1
11
121
1331
14641
*/
#include <stdio.h>
int main(){
    int n;
    int number=1;
    printf("Enter Number of Rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=i;j++){
            printf("%d",number);
        }printf("\n");
        number=number*11;
    }
    return 0;
}