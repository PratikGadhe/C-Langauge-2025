//Complete the function void update(int *a,int *b).
//It receives two integer pointers, int* a and int* b.
//Set the value of  to their sum a and b to their absolute difference.
//There is no return value, and no return statement is needed.
#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) {
    printf("%d\n%d\n",(*a)+(*b),abs((*a)-(*b)));
    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    // printf("%d\n%d", a, b);

    return 0;
}
