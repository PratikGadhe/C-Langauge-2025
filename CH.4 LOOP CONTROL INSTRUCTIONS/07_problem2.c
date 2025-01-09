//Print the numbers from 0 to n, if n is given by user

#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);

    //using while loop 

    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }

    //using for loop 

    for (int i=0 ; i<=n ; i++ ){
        printf("%d\n",i);
    }
    return 0;
    
}