/*

*                 *        [1,8,1]
* *             * *        [2,6,2]
* * *         * * *        [3,4,3]
* * * *     * * * *        [4,2,4]
* * * * * * * * * *        [5,0,5]
* * * *     * * * *        [4,2,4]
* * *         * * *        [3,4,3]
* *             * *        [2,6,2]
*                 *        [1,8,1]

*/
#include <stdio.h>
void print20(int n){
    for(int i=1;i<=(2*n-1);i++){
        int start=i;
        if(i>n){
            start=2*n-i;
            for(int j=1;j<=start;j++){
                printf("*");
            }
            for(int j=1;j<=i-start;j++){
                printf(" ");
            }
            for(int j=1;j<=start;j++){
                printf("*");
            }printf("\n");
        }
        else{

            for(int j=1;j<=i;j++){
                printf("*");
            }
            for(int j=1;j<=(n*2)-(i*2);j++){
                printf(" ");
            }
            for(int j=1;j<=i;j++){
                printf("*");
            }printf("\n");
        }
    }
}
int main(){
    int n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    print20(n);
    return 0;
}