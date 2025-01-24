//write a program to write all the odd numbers from 1 to n in a file 
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("10_problem.txt","w");
    int n;
    printf("Enter Value of n:");
    scanf("%d",&n);
    printf("\n");
    fprintf(fptr,"The odd numbers include in (1-n) are ");
    for(int i = 1 ; i<=n ;i++){
        if(i%2 != 0){
            fprintf(fptr,"%d\t",i);
        }
    }

    return 0;
}