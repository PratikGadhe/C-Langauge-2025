//printing star pattern using function
#include <stdio.h>
void print1(int n){
    for(int i=0 ; i<n ;i++){
        for(int j=0 ; j<n ; j++){
            printf("*");
        }printf("\n");
    }
}
int main(){
    int a;
    printf("Enter number of rows : ");
    scanf("%d",&a);
    print1(a);
    return 0;
}