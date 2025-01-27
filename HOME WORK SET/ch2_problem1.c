//wap to print average of 3 numbers 
#include <stdio.h>
int main(){
    int n[3];
    for(int i = 0 ; i<3 ; i++){
        printf("Enter Number %d : ",i+1);
        scanf("%d",&n[i]);
    }
    printf("Average of three numbers are %d\n",(n[0]+n[1]+n[2])/3);
    return 0;
}