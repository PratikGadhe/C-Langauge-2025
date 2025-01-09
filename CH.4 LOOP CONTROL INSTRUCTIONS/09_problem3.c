//Print the Sum of First n Natural Numbers.

#include <stdio.h>
int main(){
    
    int n ;
    printf("Enter a Number :");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1 ; i<=n ; i++){  
        printf("%d\n",i);

        sum = sum + i;  
    }
    printf("sum of first n natural number : %d\n",sum);
    return 0;
}