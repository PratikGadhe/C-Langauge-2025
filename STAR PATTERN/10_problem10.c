/*
*
**
***
****
*****
****
***
**
*
*/
#include <stdio.h>
void print10(int n){
    /*
    MY METHOD 
    for(int i=0;i<2*n-1;i++){
        if(i<5){
            for(int j=0;j<i+1;j++){
                printf("*");
            }printf("\n");
        }
        else{
            for(int j=0;j<2*n-i-1;j++){
                printf("*");
            }printf("\n");
        }
    }
    */
   
    //TVF METHOD
    for(int i=1;i<=2*n-1;i++){
        int star=i;
        if(i>n){   //6
            star=2*n-i;
        }
        for(int j=1;j<=star;j++){
            printf("*");
        }printf("\n");
    }
}
int main(){
    int n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    print10(n);
    return 0;
}