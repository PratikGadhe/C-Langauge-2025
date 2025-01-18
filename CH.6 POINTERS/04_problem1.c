/* find the output
int *ptr;
int x;
ptr = &x;
*ptr = 0;
printf (" x = %d\n", x) ;        -> x = 0
printf(" *ptr = %d\n", *ptr);    -> *ptr = 0
*ptr += 5;
printf(" x = %d\n", x) ;         -> x = 5
printf(" *ptr = %d\n", *ptr);    -> *ptr = 5
(*ptr)++;
printf (" × = %d\n", x) ;        -> x = 6
printf(" *ptr = %d\n", *ptr);    -> *ptr =6
*/
#include <stdio.h>
int main()
{
    int *ptr;
    int x;
    ptr = &x;
    *ptr = 0;
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
    *ptr += 5;
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
    (*ptr)++;
    printf(" × = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
    return 0;
}