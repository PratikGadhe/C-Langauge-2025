//Print the Sum of First n Natural Numbers in reverse order

#include <stdio.h>
int main(){
    
    int n ;
    printf("Enter a Number :");
    scanf("%d",&n);
    int sum=0;
    for(int i = 1 ; i<=n ; i++){
        sum+=i;
    }
    printf("the sum of first n natural number : %d\n", sum);
    printf("N Natural numbers in reverse order are : ");
    while(sum>0){
        int num=sum%10;
        printf("%d",num);
        sum = sum/10;
    }
    printf("\n");
    // printf("N Natural numbers in reverse order are :\n");
    // for(int i=n ; i>=1 ; i--){
    //     printf("%d\n",i);
    //     sum = sum+i; 
    // }
    // printf("the sum of first n natural number : %d\n",sum);
    return 0;
}