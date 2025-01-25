//WAP to allocate memory of size n, where n is entered by the user
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    ptr=(int *) malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter Value %d :",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int j =0 ;j<n;j++){
        printf("Value %d : %d\n",j+1,ptr[j]);
    }
    return 0;
}