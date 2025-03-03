/*
* * * * * * * * * *         [5,0,5]
* * * *     * * * *         [4,2,4]
* * *         * * *         [3,4,3]
* *             * *         [2,6,2]
*                 *         [1,8,1]
*                 *         [1,8,1]
* *             * *         [2,6,2]
* * *         * * *         [3,4,3]
* * * *     * * * *         [4,2,4]
* * * * * * * * * *         [5,0,5]
*/
#include <stdio.h>
void print19(int n){
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<n-i;j++){
            printf("* ");
        }
        //space
        for(int j=0;j<i*2;j++){
            printf("  ");
        }
        //star
        for(int j=0;j<n-i;j++){
            printf("* ");
        }printf("\n");
    }
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<i+1;j++){
            printf("* ");
        }
        //space
        for(int j=0;j<(n*2)-(i*2+2);j++){
            printf("  ");
        }
        //star
        for(int j=0;j<i+1;j++){
            printf("* ");
        }printf("\n");
    }    
    
}
int main(){
    int n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    print19(n);
    return 0;
}