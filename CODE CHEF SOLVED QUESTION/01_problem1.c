#include <stdio.h>

int main() {
	// your code goes here
    int n;//n=6
    scanf("%d",&n);
    int sum=0;
    int i=1;
    while(i<=n){
        if(i%2 == 0){
            sum+=i;//12
        }
        i++;
    }
}

