//Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a , int b , int c , int d);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);
    
    return 0;
}
int max_of_four(int a , int b , int c , int d){
    int greatest=0;
    if(a>b && a>c && a>d){
        greatest=a;
    }
    else if (b>a && b>c && b>d) {
        greatest=b;
    }
    else if (c>a && c>b && c>d) {
        greatest=c;
    }
    else if (d>a && d>b && d>c) {
        greatest=d;
    }
    return greatest;
}
