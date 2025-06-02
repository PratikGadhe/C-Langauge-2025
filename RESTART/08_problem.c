#include <stdio.h>

int table(int n);

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    table(n);
    return 0;
}

int table(int n){
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d \n",n,i,(n*i));
    }
    return 0;
}