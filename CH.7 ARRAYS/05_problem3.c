//traverse aaray

#include <stdio.h>
int main(){
    int number[4] ;
    int *ptr = &number[0];
    //input
    for(int i = 0 ; i<4 ;i++ ){
        printf("Enter phone number %d: ",i);
        scanf("%d",&number[i]);
    }
    //output
    for(int i = 0 ; i<4 ; i++){
        printf("phone number %d : %d\n",i,number[i]);
    }
    return 0;
}