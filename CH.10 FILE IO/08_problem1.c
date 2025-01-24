//print 5 integer from the file
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("08_problem.txt","r");
    int n;
    fscanf(fptr,"%d",&n);
    printf("Integer :%d\n",n);
    fscanf(fptr,"%d",&n);
    printf("Integer :%d\n",n);
    fscanf(fptr,"%d",&n);
    printf("Integer :%d\n",n);
    fscanf(fptr,"%d",&n);
    printf("Integer :%d\n",n);
    fscanf(fptr,"%d",&n);
    printf("Integer :%d\n",n);
    fclose(fptr);
    return 0;
}