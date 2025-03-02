/*
1
22
333
4444
55555
*/
#include <stdio.h>
void print4(int a){
    for(int i=1;i<=a;i++){
        for(int j=1 ; j<=i ; j++){
            printf("%d",i);
        }
        printf("\n");
    }
}
int main(){
    int a;
    printf("Enter number of rows : ");
    scanf("%d",&a);
    print4(a);
    return 0;
}
